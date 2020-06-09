/*! /file v__set.h
 *
 */


#ifndef BLASxON__V__SET_H
  #define BLASxON__V__SET_H


  // -- CPU Architecture
  #include "../../cpu_architecture/cpu_architecture.h"


  // -- BLAS Datatypes
  #include "../../datatypes/inc/vector.h"
  // #include "../../datatypes/inc/matrix.h"


  #ifdef __cplusplus
    extern "C" {
  #endif


    void BLASxON__FuncHEAD v__set(
      struct vector * vDst,
      const float * arraySrc
    )
      __attribute__((nonull))
    ;


  #ifdef __cplusplus
    }
  #endif


#endif // BLASxON__V__SET_H


