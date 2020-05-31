/*! /file s__v_dot_v.h
 *
 */


#ifndef BLASxOFF_S__V_DOT_V_H
  #define BLASxOFF_S__V_DOT_V_H


  #include "esp_attr.h"


  // Vector Datatype
  #include "../../gnd/datatypes/inc/vector.h"


  #ifdef __cplusplus
    extern "C" {
  #endif


    void IRAM_ATTR s__v_dot_v(
      float * sclRes,
      const struct vector * vOprA,
      const struct vector * vOprB
    )
      __attribute__((nonull))
    ;


  #ifdef __cplusplus
    }
  #endif 


#endif // BLASxOFF_S__V_DOT_V_H


