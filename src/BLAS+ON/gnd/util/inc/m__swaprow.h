/*! /file m__swaprow.h
 *
 */



#ifndef BLASxOFF__M__SWAPROW_H
  #define BLASxOFF__M__SWAPROW_H


  #include "../../cpu_architecture/cpu_architecture.h"


  #include "../../datatypes/inc/matrix.h"


  #ifdef __cplusplus
    extern "C" {
  #endif


  void BLASxOFF__FuncHEAD m__swaprow(
    struct matrix * mDst,
    const unsigned int row1,
    const unsigned int row2
  )
    __attribute__((nonull))
  ;


  #ifdef __cplusplus
    }
  #endif


#endif // BLASxOFF__M__SWAPROW_H


