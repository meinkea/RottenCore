/*! /file m__setrow.h
 *
 */



#ifndef BLASxOFF__M__SETROW_H
  #define BLASxOFF__M__SETROW_H


  #include "../../cpu_architecture/cpu_architecture.h"


  #include "../../datatypes/inc/matrix.h"


  #ifdef __cplusplus
    extern "C" {
  #endif


  void BLASxOFF__FuncHEAD m__setrow(
    struct matrix * mDst,
    const float * arraySrc,
    const unsigned int row
  )
    __attribute__((nonull))
  ;


  #ifdef __cplusplus
    }
  #endif


#endif // BLASxOFF__M__SETROW_H


