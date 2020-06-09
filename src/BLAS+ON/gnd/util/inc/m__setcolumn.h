/*! /file m__setcolumn.h
 *
 */


#ifndef BLASxON__M__SETCOLUMN_H
  #define BLASxON__M__SETCOLUMN_H


  // -- CPU Architecture
  #include "../../cpu_architecture/cpu_architecture.h"


  // -- BLAS Datatypes
  // #include "../../datatypes/inc/vector.h"
  #include "../../datatypes/inc/matrix.h"


  #ifdef __cplusplus
    extern "C" {
  #endif


    void BLASxON__FuncHEAD m__setcolumn(
      struct matrix * mDst,
      const float * arraySrc,
      const unsigned int column
    )
      __attribute__((nonull))
    ;


  #ifdef __cplusplus
    }
  #endif


#endif // BLASxON__M__SETCOLUMN_H


