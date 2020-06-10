/*! /file m__clone.h
 *
 *  /brief Copies the content of one matrix to another matrix
 *
 */


#ifndef BLASxON__M__CLONE_H
  #define BLASxON__M__CLONE_H


  // -- CPU Architecture
  #include "../../cpu_architecture/cpu_architecture.h"


  // -- BLAS Datatypes
  // #include "../../datatypes/inc/vector.h"
  #include "../../datatypes/inc/matrix.h"


  // Additional
  #include <stdint.h>


  #ifdef __cplusplus
    extern "C" {
  #endif


    void BLASxON__FuncHEAD m__clone(
      struct matrix * mRes,
      const struct matrix * mSrc,
      const char * name,
      const uint32_t memory_capability
    )
      __attribute__((nonull))
    ;


  #ifdef __cplusplus
    }
  #endif


#endif // BLASxON__M__CLONE_H


