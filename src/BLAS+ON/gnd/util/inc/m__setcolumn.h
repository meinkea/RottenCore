/*! /file m__setcolumn.h
 *
 */



#ifndef BLASxOFF__M__SETCOLUMN_H
  #define BLASxOFF__M__SETCOLUMN_H


  #include "../../cpu_architecture/cpu_architecture.h"


  #include "../../datatypes/inc/matrix.h"


  #ifdef __cplusplus
    extern "C" {
  #endif


  void BLASxOFF__FuncHEAD m__setcolumn(
    struct matrix * mDst,
    const float * arraySrc,
    const unsigned int column
  )
    __attribute__((nonull))
  ;


  #ifdef __cplusplus
    }
  #endif


#endif // BLASxOFF__M__SETCOLUMN_H


