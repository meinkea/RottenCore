/*
 *
 *  For this version, only row swapping will occur in O(1) (constant time).
 *  Plans are to compare this with another type that preforms both row and column switch in O(n) time.
 *
 */


#include "../inc/m__init.h"

#include "../inc/common.h"


/*  (Reminder) Flags to indicate the capabilities of the various memory systems
 */
  //  #define MALLOC_CAP_EXEC             (1<<0)  ///< Memory must be able to run executable code
  //  #define MALLOC_CAP_32BIT            (1<<1)  ///< Memory must allow for aligned 32-bit data accesses
  //  #define MALLOC_CAP_8BIT             (1<<2)  ///< Memory must allow for 8/16/...-bit data accesses
  //  #define MALLOC_CAP_DMA              (1<<3)  ///< Memory must be able to accessed by DMA
    //  #define MALLOC_CAP_PID2             (1<<4)  ///< Memory must be mapped to PID2 memory space (PIDs are not currently used)
    //  #define MALLOC_CAP_PID3             (1<<5)  ///< Memory must be mapped to PID3 memory space (PIDs are not currently used)
    //  #define MALLOC_CAP_PID4             (1<<6)  ///< Memory must be mapped to PID4 memory space (PIDs are not currently used)
    //  #define MALLOC_CAP_PID5             (1<<7)  ///< Memory must be mapped to PID5 memory space (PIDs are not currently used)
    //  #define MALLOC_CAP_PID6             (1<<8)  ///< Memory must be mapped to PID6 memory space (PIDs are not currently used)
    //  #define MALLOC_CAP_PID7             (1<<9)  ///< Memory must be mapped to PID7 memory space (PIDs are not currently used)
  //  #define MALLOC_CAP_SPIRAM           (1<<10) ///< Memory must be in SPI RAM
  //  #define MALLOC_CAP_INTERNAL         (1<<11) ///< Memory must be internal; specifically it should not disappear when flash/spiram cache is switched off
  //  #define MALLOC_CAP_DEFAULT          (1<<12) ///< Memory can be returned in a non-capability-specific memory allocation (e.g. malloc(), calloc()) call
  //  #define MALLOC_CAP_IRAM_8BIT        (1<<13) ///< Memory must be in IRAM and allow unaligned access
  //  
  //  #define MALLOC_CAP_INVALID          (1<<31) ///< Memory can't be used / list end marker


// ####  MATRIX INITIALIZATION  #### //
//int m__init(
//  struct matrix * pM,
//  const unsigned int r,
//  const unsigned int c,
//  const char * name, 
//  const uint32_t memory_capability
//);


// #####  ALLOCATION & CONSTRUCTION  ##### //
int matrix_construction(
  struct matrix * pM,
  const unsigned int r,
  const unsigned int c,
  const char * name,
  const uint32_t memory_capability
);

int matrix_data_malloc(
  float *** DATAptr,
  unsigned int ** rpDATAptr,
  const unsigned int r,
  const unsigned int c,
  const uint32_t memory_capability
);

size_t sizeofmatrix(
  const unsigned int r,
  const unsigned int c
);

int matrix_setup(
  struct matrix * pM,
  const float ** DATAptr,
  const unsigned int r,
  const unsigned int c,
  const char * name
);

void matrix_linkup(
  float ** DATAptr,
  const unsigned int r,
  const unsigned int c
);


//  #####  CHECK REQUESTED INITIALIZATION  #####  //
int check_minit(
  const struct matrix * pM,
  const unsigned int r,
  const unsigned int c,
  const char * name,
  const uint32_t memory_capability
);

int matrix_check_alloc(
  struct matrix * pM
);

int matrix_check_size(
  const unsigned int r,
  const unsigned int c
);




//   ###-----### ========================= ###-----###   //
//  #####(O)#####  MATRIX INITIALIZATION  #####(O)#####  //
//   ###-----### ========================= ###-----###   //


// Matrix Initialization
int m__init(
  struct matrix * pM,
  const unsigned int r,
  const unsigned int c,
  const char * name,
  const uint32_t memory_capability
) {
  int ret = 0;

  ret = minit_check(pM, c, r, name, memory_capability);
  if(ret != 0) {
    return ret;
  }

  // Allocation and Construction of Matrix
  ret = matrix_construction(pM, r, c, name, memory_capability);
  if(ret != 0) {
    return ret;
  }

  return 0;
}




//   ###-----### ============================= ###-----###   //
//  #####(O)#####  ALLOCATION & CONSTRUCTION  #####(O)#####  //
//   ###-----### ============================= ###-----###   //


// Main building function
int matrix_construction(
  struct matrix * pM,
  const unsigned int r,
  const unsigned int c,
  const char * name,
  const uint32_t memory_capability
) {
  int ret = 0;

  float ** DATAptr;
  unsigned int * rpDATAptr;
  ret = matrix_data_malloc(&DATAptr, &rpDATAptr, r, c, memory_capability);
  if(ret != 0) return ret;

  matrix_setup(pM, DATAptr, r, c, name);

  return 0;
}

//  ----- Allocates matrix memory -----
int matrix_data_malloc(
  float *** DATAptr,
  unsigned int ** rpDATAptr,
  const unsigned int r,
  const unsigned int c,
  const uint32_t memory_capability
) {
  float ** MDptr = NULL;
  unsigned int * RPptr = NULL;

  // Allocating Memory
  MDptr = (float **) heap_caps_malloc(sizeofmatrix(r, c), memory_capability);
  RPptr = (unsigned int *) heap_caps_malloc(r * sizeof(unsigned int), memory_capability);

  // Check to see if memory allocation was successful
  if(MDptr == NULL) return BLAS_ERR_MEMORY_ALLOCATION_FAILURE;
  if(RPptr == NULL) return BLAS_ERR_MEMORY_ALLOCATION_FAILURE;

  // Hand over new float * array
  *DATAptr = MDptr;
  *rpDATAptr = RPptr;

  return 0;
}

//  ----- Compute the required size for memory -----
size_t sizeofmatrix(const unsigned int r, const unsigned int c) {
  // Amount of Memory  =    Row Pointers     +     Matrix Data
  return ( (r)*sizeof(float *) + (c * r)*sizeof(float) );
}


//  ----- Setup Matrix -----
matrix_setup(
  struct matrix * pM,
  const float ** DATAptr,
  const unsigned int r,
  const unsigned int c,
  const char * name
) {

  matrix_linkup(DATAptr, r, c);

  // Linkup the Matrix
  pM->r = r;
  pM->c = c;
  pM->l = r*c;

  pM->m = DATAptr;

  pM->name = name;

  // Clearing Memory
  array_zero(pM->m[0], 0, pM->l);

  pM->flags = ALLOCATED_F;

  return;
}

// ----- Linkup Matrix -----
void matrix_linkup(
  float ** DATAptr,
  const unsigned int r,
  const unsigned int c
) {
  float * link = (float *) (DATAptr + r);

  for(unsigned int I=0; I<r; ++I) {
    DATAptr[I] = (float *) (link + c*I);
  }
  
  return;
}



//   ###-----### ================================ ###-----###   //
//  #####(O)#####  CHECK REQUEST INITIALIZATION  #####(O)#####  //
//   ###-----### ================================ ###-----###   //


int minit_check(
  const struct matrix * pM,
  const unsigned int r,
  const unsigned int c,
  const char * name,
  const uint32_t memory_capability
) {
  int ret = 0;

  ret = matrix_check_alloc(pM);
  if(ret != 0) return ret;

  ret = matrix_check_size(r, c);
  if(ret != 0) return ret;

//  ret = check_name(name);
//  if(ret != 0) return ret;

  return 0;
}

int matrix_check_alloc(struct matrix * pM) {
  if(pM->flags & ALLOCATED_F != 0) return BLAS_ERR_MEMORY_ALREADY_ALLOCATED;
  return 0;
}

int matrix_check_size(unsigned int r, unsigned int c) {
  if(r > MATRIX_ROW_MAX) return BLAS_ERR_REQUEST_GREATER_THEN_MATRIX_ROW_MAX;
  if(c > MATRIX_COL_MAX) return BLAS_ERR_REQUEST_GREATER_THEN_MATRIX_COL_MAX;
  if(r*c > MATRIX_SIZE_MAX) return BLAS_ERR_REQUEST_GREATER_THEN_MATRIX_SIZE_MAX;

  return 0;
}


