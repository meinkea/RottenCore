/*! /file m__swaprow.h
 *
 */


#ifndef BLASxON__M__SWAPROW_H
  #define BLASxON__M__SWAPROW_H


  // -- CPU Architecture
  #include "../../cpu_architecture/cpu_architecture.h"


  // -- BLAS Datatypes
  // #include "../../datatypes/inc/vector.h"
  #include "../../datatypes/inc/matrix.h"


  #ifdef __cplusplus
    extern "C" {
  #endif


    void BLASxON__FuncHEAD m__swaprow(
      struct matrix * mDst,
      const unsigned int row1,
      const unsigned int row2
    )
      __attribute__((nonull))
    ;


  #ifdef __cplusplus
    }
  #endif


#endif // BLASxON__M__SWAPROW_H


