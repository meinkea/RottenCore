/*! /file mstringf.c
 *
 *  /brief String representation of Matrix Data
 *
 */


#include "../inc/stringf_common.h"
#include "../inc/mstringf.h"
#include "../inc/float_to_string.h"

#include "../../error/BLAS_error_codes.h"



char * mstringf(char * buf, const struct matrix * mSrc) {
  float ** mS = mSrc->m;

  // By Row (I)
  char * index=buf;
  for(unsigned int I=0; I<(mSrc->r); ++I) {
    // First column number
    float_to_string(index, mS[I][0]);
    index += BLAS_PRINT_ARRAY_NUM_DIGITS;

    // for each successive column
    for(unsigned int II=1; II<(mSrc->c); ++II) {

      // White Space Padding
      for(unsigned int III=0; III<(unsigned int) BLAS_PRINT_SPACE_BETWEEN_ELEMENTS; ++III) {
        *(index++) = ' ';
      }

      // Next column number
      float_to_string(index, mS[I][II]);

      // Index at end of successive column
      index += BLAS_PRINT_ARRAY_NUM_DIGITS;
    }
    
    *(index++) = '\n';

  }

  return buf;
}

int mstringf_init_buffer(char ** buf, const struct matrix * mSrc) {
  // Check to see if buffer is NULL
  if(*buf != NULL) {
    return BLAS_ERR_MEMORY_ALREADY_ALLOCATED; // Not a clean buffer
  }

  // Checking to see if there is enough memory avaliable
  size_t max_mem = heap_caps_get_largest_free_block(MALLOC_CAP_8BIT);
  if(max_mem< mstringf_buffersize(mSrc)) {
    return BLAS_ERR_MEMORY_ALLOCATION_SIZE_NOT_AVALIABLE;
  }

  // Allocating String Buffer
  char * Bptr = NULL;
  size_t memSize = mstringf_buffersize(mSrc);
  Bptr = (char *) heap_caps_malloc(memSize, MALLOC_CAP_8BIT);
  // Set end of string char
  Bptr[memSize -1] = '\0';

  //  Check for if malloc return failed (NULL)
  if(Bptr == NULL) {
    return BLAS_ERR_MEMORY_ALLOCATION_FAILURE;
  }

  *buf = Bptr;

  return 0;
}


int mstringf_free_buffer(char * buf) {
  // Check to see if the buffer is NULL
  if(buf == NULL) {
    return BLAS_ERR_MEMORY_ALREADY_FREE; // Buffer already free!! (DO NOT FREE TWICE!!)
  }

  free(buf);

  return 0;
}


size_t mstringf_buffersize(const struct matrix * mOpr) {
  return (size_t) 
    (sizeof(char) *
      (mOpr->r* 
        (   (mOpr->c)   *BLAS_PRINT_ARRAY_NUM_DIGITS       // Num of digit characters (with '.' and sign
          + (mOpr->c-1) *BLAS_PRINT_SPACE_BETWEEN_ELEMENTS // Num of element padding (-1 multiple less then above)
          + 1                                              // Space for '\n'
        )
       + 1                                                 // Space for '\0'
      )
    );
}


