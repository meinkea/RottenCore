/*! /file m__set.h
 *
 */



#ifndef BLASxOFF__M__SET_H
  #define BLASxOFF__M__SET_H


  #include "../../cpu_architecture/cpu_architecture.h"


  #include "../../datatypes/inc/matrix.h"


  #ifdef __cplusplus
    extern "C" {
  #endif


  void BLASxOFF__FuncHEAD m__set(
    struct matrix * mDst,
    float * arraySrc
  )
    __attribute__((nonull))
  ;


  #ifdef __cplusplus
    }
  #endif


#endif // BLASxOFF__M__SET_H


