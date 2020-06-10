/*! Utitility function for initializing vector datatypes
 *
 *  Return Codes
 *     0 ~ Vector Initialization and Allocation was successful
 *    -1 ~ (BLAS_ERR) Vector has already been initialized
 *    -2 ~ (BLAS_ERR) Malloc has failed
 *
 */


#include "../inc/v__init.h"

#include "../inc/common.h"


int vector_construction(
  struct vector * pV,
  const unsigned int l,
  const char * name,
  const uint32_t memory_capability
);

int vector_data_malloc(
  float ** DATAptr,
  const unsigned int l,
  const uint32_t memory_capability
);

size_t sizeofvector(
  const unsigned int l
);

void vector_setup(
  struct vector * pV,
  float * DATAptr,
  const unsigned int l,
  const char * name
);

int check_vinit(
  const struct vector * pV,
  const unsigned int l,
  const char * name,
  const uint32_t memory_capability
);

int vector_check_alloc(
  const struct vector * pV
);

int vector_check_size(
  const unsigned int l
);



//   ###-----### ========================= ###-----###   //
//  #####(O)#####  VECTOR INITIALIZATION  #####(O)#####  //
//   ###-----### ========================= ###-----###   //


// Vector Initialization
int v__init(struct vector * pV, const unsigned int l, const char * name, const uint32_t memory_capability) {
  int ret = 0;

  ret = check_vinit(pV, l, name, memory_capability);
  if(ret != 0) {
    return ret;
  }

  // Allocation and Construction of Vector
  ret = vector_construction(pV, l, name, memory_capability);
  if(ret != 0) {
    return ret;
  }

  return 0;
}




//   ###-----### ============================= ###-----###   //
//  #####(O)#####  ALLOCATION & CONSTRUCTION  #####(O)#####  //
//   ###-----### ============================= ###-----###   //


// Main building function
int vector_construction(struct vector * pV, const unsigned int l, const char * name, const uint32_t memory_capability) {
  int ret = 0;

  float * DATAptr;
  ret = vector_data_malloc(&DATAptr, l, memory_capability);
  if(ret != 0) return ret;

  vector_setup(pV, DATAptr, l, name);

  return 0;
}

//  ----- Allocates matrix memory -----
int vector_data_malloc(float ** DATAptr, const unsigned int l, const uint32_t memory_capability) {
  float * Vptr = NULL;

  // Allocating Vector
  Vptr = (float *) heap_caps_malloc(sizeofvector(l), memory_capability);
  //Vptr = (float *) malloc(sizeofvector(l));

  //return (int) Vptr;

  // Check to see if memory allocation was successful
  if(Vptr == NULL) return BLAS_ERR_MEMORY_ALLOCATION_FAILURE;

  // Hand over new float array
  *DATAptr = Vptr;
  return 0;
}

// ----- Compute the required size for vector -----
size_t sizeofvector(const unsigned int l) {
  return ( (l)*sizeof(float) );
}


//  ----- Setup Vector -----
void vector_setup(struct vector * pV, float * DATAptr, const unsigned int l, const char * name) {
  // Linkup the Vector  
  pV->l = l;

  pV->v = DATAptr;

  pV->name = name;

  // Clearing Memory
  array_zero(pV->v, 0, pV->l);

  pV->flags = ALLOCATED_F;

  return;
}




//   ###-----### ================================ ###-----###   //
//  #####(O)#####  CHECK REQUEST INITIALIZATION  #####(O)#####  //
//   ###-----### ================================ ###-----###   //


int check_vinit(const struct vector * pV, const unsigned int l, const char * name, const uint32_t memory_capability) {
  int ret = 0;

  ret = vector_check_alloc(pV);
  if(ret != 0) return ret;

  ret = vector_check_size(l);
  if(ret != 0) return ret;

//  ret = vector_name(name);
//  if(ret != 0) return ret;

  return 0;
}

int vector_check_alloc(const struct vector * pV) {
  if(pV->flags & ALLOCATED_F) return BLAS_ERR_MEMORY_ALREADY_ALLOCATED;
  return 0;
}

int vector_check_size(const unsigned int l) {
  if(l > VECTOR_SIZE_MAX) return BLAS_ERR_REQUEST_GREATER_THEN_VECTOR_SIZE_MAX;
  return 0;
}


