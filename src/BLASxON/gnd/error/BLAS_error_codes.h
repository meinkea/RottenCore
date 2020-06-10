/*! /file error_codes.h
 *
 *  /brief Helo codes to diagnose problems
 *
 */


#ifndef BLASxON_BLAS_ERROR_CODES_H
  #define BLASxON_BLAS_ERROR_CODES_H


  // Memory Errors
  #define BLAS_ERR_MEMORY_ALLOCATION_FAILURE               -1
  #define BLAS_ERR_MEMORY_ALREADY_ALLOCATED                -2
  #define BLAS_ERR_MEMORY_ALLOCATION_SIZE_NOT_AVALIABLE    -3
  #define BLAS_ERR_MEMORY_ALREADY_FREE                     -4
  #define BLAS_ERR_REQUEST_GREATER_THEN_MATRIX_ROW_MAX     -5
  #define BLAS_ERR_REQUEST_GREATER_THEN_MATRIX_COL_MAX     -6
  #define BLAS_ERR_REQUEST_GREATER_THEN_MATRIX_SIZE_MAX    -7
  #define BLAS_ERR_REQUEST_GREATER_THEN_VECTOR_SIZE_MAX    -8
  #define BLAS_ERR_REQUEST_GREATER_THEN_NAME_SIZE_MAX      -9

  // Degenerative Matrix
  #define BLAS_ERR_MATRIX_IS_DEGENERATE                   -10


#endif // BLASxON_BLAS_ERROR_CODES_D


