/*! /file v__v_cross3_v.h
 *
 */


#ifndef BLASxON_V__V_CROSS3_v_H
  #define BLASxON_V__V_CROSS3_v_H


  #include "esp_attr.h"


  // Vector Datatype
  #include "../../BLASxON/gnd/datatypes/inc/vector.h"


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


#endif // BLASxON_V__V_CROSS3_V_H


