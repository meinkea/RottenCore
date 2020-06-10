/*! /file s__v_norm1_v.h
 *
 */


#ifndef BLASxON_V__V_NORM1_V_H
  #define BLASxON_V__V_NORM1_V_H


  #include "esp_attr.h"


  // Vector Datatype
  #include "../../BLASxON/gnd/datatypes/inc/vector.h"


  #ifdef __cplusplus
    extern "C" {
  #endif


    void IRAM_ATTR s__v_norm1_v(
      float * sclRes,
      const struct vector * vOprA,
      const struct vector * vOprB
    )
      __attribute__((nonull))
    ;


  #ifdef __cplusplus
    }
  #endif 


#endif // BLASxON_V__V_NORM1_V_H


