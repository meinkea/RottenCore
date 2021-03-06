/*! /file m__zero.h
 *
 *  /brief Zero out all elements in a vector
 *
 */


#ifndef BLASxON__M__ZERO_H
  #define BLASxON__M__ZERO_H


  // -- CPU Architecture
  #include "../../cpu_architecture/cpu_architecture.h"


  // -- BLAS Datatypes
  // #include "../../datatypes/inc/vector.h"
  #include "../../datatypes/inc/matrix.h"


  #ifdef __cplusplus
    extern "C" {
  #endif


    void BLASxON__FuncHEAD m__zero(
      struct matrix * mDst
    )
      __attribute__((nonull))
    ;


  #ifdef __cplusplus
    }
  #endif


#endif // BLASxON__M__ZERO_H


