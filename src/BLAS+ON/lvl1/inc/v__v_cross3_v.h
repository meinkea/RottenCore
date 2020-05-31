/*! /file v__v_cross3_v.h
 *
 */


#ifndef BLASxOFF_V__V_CROSS3_v_H
  #define BLASxOFF_V__V_CROSS3_v_H


  #include "esp_attr.h"


  // Vector Datatype
  #include "../../gnd/datatypes/inc/vector.h"


  #ifdef __cplusplus
    extern "C" {
  #endif


    void IRAM_ATTR v__v_cross3_v(
      struct vector * vRes,
      const struct vector * vOprA,
      const struct vector * vOprB
    )
      __attribute__((nonull))
    ;


  #ifdef __cplusplus
    }
  #endif 


#endif // BLASxOFF_V__V_CROSS3_V_H


