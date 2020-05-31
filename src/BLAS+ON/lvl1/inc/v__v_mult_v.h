/*! /file v__v_mult_v.h
 *
 */


#ifndef BLASxOFF_V__V_MULT_V_H
  #define BLASxOFF_V__V_MULT_V_H


  #include "esp_attr.h"


  // Vector Datatype
  #include "../../gnd/datatypes/inc/vector.h"


  #ifdef __cplusplus
    extern "C" {
  #endif


  void IRAM_ATTR v__v_mult_v(
    struct vector * vRes,
    const struct vector * vOprA,
    const struct vector * vOprB
  )
    __attribute__((nonull))
  ;


  #ifdef __cplusplus
    }
  #endif 


#endif // BLASxOFF_V__V_MULT_V_H


