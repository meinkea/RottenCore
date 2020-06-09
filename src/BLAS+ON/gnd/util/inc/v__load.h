/*! /file v__load.h
 *
 *  /brief
 *
 */


#ifndef BLASxON__V__LOAD_H
  #define BLASxON__V__LOAD_H


  // -- CPU Architecture
  #include "../../cpu_architecture/cpu_architecture.h"


  // -- BLAS Datatypes
  #include "../../datatypes/inc/vector.h"
  // #include "../../datatypes/inc/matrix.h"


  #ifdef __cplusplus
    extern "C" {
  #endif


    void BLASxON__FuncHEAD v__load(
      struct vector * vDst
    )
      __attribute__((nonull))
    ;


  #ifdef __cplusplus
    }
  #endif 


#endif // BLASxON__V__LOAD_H


