/*! /file mstringf.h
 *
 *  /brief Provide printable version of the matrix
 *
 */


#ifndef BLASxON_MSTRINGF_H
  #define BLASxON_MSTRINGF_H


  // -- CPU Architecture
  #include "../../cpu_architecture/cpu_architecture.h"


  // -- BLAS Datatypes
  // #include "../../gnd/datatypes/inc/vector.h"
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


#endif // BLASxON_VSTRINGF_H


