/*! /file m__set.h
 *
 */


#ifndef BLASxON__M__SET_H
  #define BLASxON__M__SET_H


  // -- CPU Architecture
  #include "../../cpu_architecture/cpu_architecture.h"


  // -- BLAS Datatypes
  // #include "../../datatypes/inc/vector.h"
  #include "../../datatypes/inc/matrix.h"


  #ifdef __cplusplus
    extern "C" {
  #endif


    void BLASxON__FuncHEAD m__set(
      struct matrix * mDst,
      float * arraySrc
    )
      __attribute__((nonull))
    ;


  #ifdef __cplusplus
    }
  #endif


#endif // BLASxON__M__SET_H


