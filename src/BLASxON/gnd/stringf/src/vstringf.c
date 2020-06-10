/*! /file vstringf.c
 *
 */


#include "../inc/stringf_common.h"
#include "../inc/vstringf.h"
#include "../inc/float_to_string.h"

#include "../../error/BLAS_error_codes.h"



char * vstringf(char * buf, const struct vector * vSrc) {
  float * vS = vSrc->v;

  for(unsigned int I=0; I<vSrc->l; ++I) {
    float_to_string(buf + I*(BLAS_PRINT_ARRAY_NUM_DIGITS+1), vS[I]);
    // Newline character at the end of every printed number
    //   Formula:
    //     (I+1)(BLAS_PRINT_ARRAY_NUM_DIGITS) ~ means end of last
    //     +I ~ This accounts for the previously added '\n' 
    //          and skips the fact that there is no '\n' to account
    //          for on the first loop
    buf[(I+1)*(BLAS_PRINT_ARRAY_NUM_DIGITS) +I] = '\n';
  }

  //buf[(BLAS_PRINT_ARRAY_NUM_DIGITS+1)*vSrc->l] = '\0';

  return buf;
}


int vstringf_init_buffer(char ** buf, const struct vector * vSrc) {
  // Check to see if buffer is NULL
  if(*buf != NULL) {
    return BLAS_ERR_MEMORY_ALREADY_ALLOCATED; // Not a clean buffer
  }

  // Checking to see if there is enough memory avaliable
  size_t max_mem = heap_caps_get_largest_free_block(MALLOC_CAP_8BIT);
  if(max_mem < vstringf_buffersize(vSrc)) {
    return BLAS_ERR_MEMORY_ALLOCATION_SIZE_NOT_AVALIABLE;
  }

  // Allocating String Buffer
  char * Bptr = NULL;
  size_t  memSize = vstringf_buffersize(vSrc);
  Bptr = (char *) heap_caps_malloc(memSize, MALLOC_CAP_8BIT);
  // Set end of string char
  Bptr[memSize-1] = '\0';

  // Check for if malloc return failed (NULL)
  if(Bptr == NULL) {
    return BLAS_ERR_MEMORY_ALLOCATION_FAILURE;
  }

  // Hand over the new char buffer
  *buf = Bptr;
  return 0;
}


int vstringf_free_buffer(char * buf) {
  // Check to see if the buffer is NULL
  if(buf == NULL) {
    return BLAS_ERR_MEMORY_ALREADY_FREE; // Buffer already free!! (DO NOT FREE TWICE!)
  }
  
  free(buf);

  return 0;
}


/*! This useful function calculates the required char buffer size for printing
 *
 */
size_t vstringf_buffersize(const struct vector * vOpr) {
    return ( sizeof(char) * (vOpr->l * (BLAS_PRINT_ARRAY_NUM_DIGITS +1) +1) );
}


