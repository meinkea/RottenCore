/*! /file v__zero.h
 *
 *  /brief Zero out all elements in a vector
 *
 */


#ifndef BLASxOFF__V__ZERO_H
  #define BLASxOFF__V__ZERO_H


  #include "esp_attr.h"


  // Vector Datatype
  #include "../../datatypes/inc/vector.h"


  #ifdef __cplusplus
    extern "C" {
  #endif
  
  
    // level 0
    void IRAM_ATTR v__zero(
      struct vector * vDst
    )
      __attribute__((nonull))
    ;
  
  
  #ifdef __cplusplus
    }
  #endif 


#endif // BLASxOFF__V__ZERO_H


