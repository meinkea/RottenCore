/*! /file v__load.h
 *
 *  /brief
 *
 */


#ifndef BLASxOFF__V__LOAD_H
  #define BLASxOFF__V__LOAD_H


  #include "esp_attr.h"


  // Vector Datatype
  #include "../../datatypes/inc/vector.h"


  #ifdef __cplusplus
    extern "C" {
  #endif


    void IRAM_ATTR v__load(
      struct vector * vDst
    )
      __attribute__((nonull))
    ;


  #ifdef __cplusplus
    }
  #endif 


#endif // BLASxOFF__V__LOAD_H


