/*! /file vsprintf.h
 *
 *  /brief
 *
 */


#ifndef BLASxOFF_VSTRINGF_H
  #define BLASxOFF_VSTRINGF_H


  // -- CPU Architecture
  #include "../../cpu_architecture/cpu_architecture.h"


  // -- BLAS Datatypes
  #include "../../datatypes/inc/vector.h"
  // #include "../../gnd/datatypes/inc/matrix.h"


  #ifdef __cplusplus
    extern "C" {
  #endif


    char * IRAM_ATTR vstringf(
      char * buf,
      const struct vector * vSrc
    )
      __attribute__((nonull))
    ;


    int vstringf_init_buffer(
      char ** buf,
      const struct vector * vSrc
    )
       __attribute__((nonull))
    ;

    int vstringf_free_buffer(
      char * buf
    )
       __attribute__((nonull))
    ;

    unsigned int vstringf_buffersize(
      const struct vector * vOpr
    )
      __attribute__((nonull))
    ;


  #ifdef __cplusplus
    }
  #endif


#endif // BLASxOFF_VSTRINGF_H


