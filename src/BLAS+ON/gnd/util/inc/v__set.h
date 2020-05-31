/*! /file v__set.h
 *
 */



#ifndef BLASxOFF__V__SET_H
  #define BLASxOFF__V__SET_H


  #include "../../cpu_architecture/cpu_architecture.h"


  #include "../../datatypes/inc/vector.h"


  #ifdef __cplusplus
    extern "C" {
  #endif


  void BLASxOFF__FuncHEAD v__set(
    struct vector * vDst,
    const float * arraySrc
  )
    __attribute__((nonull))
  ;


  #ifdef __cplusplus
    }
  #endif


#endif // BLASxOFF__V__SET_H


