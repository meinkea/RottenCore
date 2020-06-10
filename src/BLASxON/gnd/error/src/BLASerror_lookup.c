/*! /file BLASerror_lookup.c
 *
 */


#include "../BLAS_error_codes.h"


char * BLASerror_msg;


char * BLASerror_lookup(const int error) {

  if(error == 0) {
    BLASerror_msg = "No Error.  All is well ^-^";

  } else if(error == BLAS_ERR_MEMORY_ALREADY_ALLOCATED) {
    BLASerror_msg = "BLAS_ERR_MEMORY_ALREADY_ALLOCATED";
    
  } else if(error == BLAS_ERR_MEMORY_ALLOCATION_FAILURE) {
    BLASerror_msg = "BLAS_ERR_MEMORY_ALLOCATION_FAILURE";

  } else if(error == BLAS_ERR_MEMORY_ALLOCATION_SIZE_NOT_AVALIABLE) {
    BLASerror_msg = "BLAS_ERR_MEMORY_ALLOCATION_SIZE_NOT_AVALIABLE";
    
  } else if(error == BLAS_ERR_MEMORY_ALREADY_FREE) {
    BLASerror_msg = "BLAS_ERR_MEMORY_ALREADY_FREE";

  } else if(error == BLAS_ERR_REQUEST_GREATER_THEN_MATRIX_ROW_MAX) {
    BLASerror_msg = "BLAS_ERR_REQUEST_GREATER_THEN_MATRIX_ROW_MAX";

  } else if(error == BLAS_ERR_REQUEST_GREATER_THEN_MATRIX_COL_MAX) {
    BLASerror_msg = "BLAS_ERR_REQUEST_GREATER_THEN_MATRIX_COL_MAX";

  } else if(error == BLAS_ERR_REQUEST_GREATER_THEN_MATRIX_SIZE_MAX) {
    BLASerror_msg = "BLAS_ERR_REQUEST_GREATER_THEN_MATRIX_SIZE_MAX";

  } else if(error == BLAS_ERR_REQUEST_GREATER_THEN_VECTOR_SIZE_MAX) {
    BLASerror_msg = "BLAS_ERR_REQUEST_GREATER_THEN_VECTOR_SIZE_MAX";

  } else if(error == BLAS_ERR_REQUEST_GREATER_THEN_NAME_SIZE_MAX) {
    BLASerror_msg = "BLAS_ERR_REQUEST_GREATER_THEN_NAME_SIZE_MAX";

  } else {
    BLASerror_msg = "SERIOUS ERROR!!! FAILED TO CATCH MALLOC FAILURE!";
  }

  return BLASerror_msg;
}
