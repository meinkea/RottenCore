/*! /file v__swap.h
 *
 *  /brief Total Swap of the contents of 2 Vectors
 *
 */


#ifndef BLASxOFF__V__SWAP_H
  #define BLASxOFF__V__SWAP_H


  #include "esp_attr.h"


  // Vector Datatype
  #include "../../datatypes/inc/vector.h"


  #ifdef __cplusplus
    extern "C" {
  #endif


    void IRAM_ATTR v__swap(
      struct vector * vScrDstA,
      struct vector * vScrDstB
    )
      __attribute__((nonull))
    ;


  #ifdef __cplusplus
    }
  #endif 


#endif // BLASxOFF__V__SWAP_H


