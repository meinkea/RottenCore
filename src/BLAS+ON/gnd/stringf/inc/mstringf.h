/*! /file mstringf.h
 *
 *  /brief Provide printable version of the matrix
 *
 */


#ifndef BLASxOFF_MSTRINGF_H
  #define BLASxOFF_MSTRINGF_H


  #include "esp_attr.h"


  // Matrix Datatype
  #include "../../datatypes/inc/matrix.h"


  #ifdef __cplusplus
    extern "C" {
  #endif


    char * mstringf(
      char * buf,
      const struct matrix * mSrc
    )
      __attribute((nonull))
    ;

    int mstringf_init_buffer(
      char ** buf,
      const struct matrix * mSrc
    )
      __attribute__((nonull))
    ;

    int mstringf_free_buffer(
      char * buf
    )
      __attribute((nonull))
    ;

    size_t mstringf_buffersize(
      const struct matrix * mOpr
    )
      __attribute__((nonull))
    ;


  #ifdef __cplusplus
    }
  #endif


#endif // BLASxOFF_VSTRINGF_H


