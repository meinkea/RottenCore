/*! /file v__copy.h
 *
 *  /brief Copy one the data from a source Vector into another Vector
 *
 */


#ifndef BLASxON__V__COPY_H
  #define BLASxON__V__COPY_H


  // -- CPU Architecture
  #include "../../cpu_architecture/cpu_architecture.h"


  // -- BLAS Datatypes
  #include "../../datatypes/inc/vector.h"
  // #include "../../datatypes/inc/matrix.h"


  #ifdef __cplusplus
    extern "C" {
  #endif


    void BLASxON__FuncHEAD v__copy(
      struct vector * vDst,
      const struct vector * vSrc
    )
      __attribute__((nonull))
    ;


  #ifdef __cplusplus
    }
  #endif 


#endif // BLASxON__V__COPY_H


