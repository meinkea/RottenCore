/*! /file v__v_subtract_s.h
 *
 */


#ifndef BLASxOFF_V__V_SUBTRACT_S_H
  #define BLASxOFF_V__V_SUBTRACT_S_H


  #include "esp_attr.h"


  // Vector Datatype
  #include "../../gnd/datatypes/inc/vector.h"


  #ifdef __cplusplus
    extern "C" {
  #endif


    void IRAM_ATTR v__v_subtract_s(
    struct vector * vRes,
    const struct vector * vOpr,
    const float * sclOpr
    )
      __attribute__((nonull))
    ;


  #ifdef __cplusplus
    }
  #endif 


#endif // BLASxOFF_V__V_SUBTRACT_S_H


