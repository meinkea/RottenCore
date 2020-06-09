/*! /file v__swap.h
 *
 *  /brief Total Swap of the contents of 2 Vectors
 *
 */


#ifndef BLASxON__V__SWAP_H
  #define BLASxON__V__SWAP_H


  // -- CPU Architecture
  #include "../../cpu_architecture/cpu_architecture.h"


  // -- BLAS Datatypes
  #include "../../datatypes/inc/vector.h"
  // #include "../../datatypes/inc/matrix.h"


  #ifdef __cplusplus
    extern "C" {
  #endif


    void BLASxON__FuncHEAD v__swap(
      struct vector * vScrDstA,
      struct vector * vScrDstB
    )
      __attribute__((nonull))
    ;


  #ifdef __cplusplus
    }
  #endif 


#endif // BLASxON__V__SWAP_H


