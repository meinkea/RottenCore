/*! /file s__v_norm1.h
 *
 */


#ifndef BLASxON_S__V_NORM1_H
  #define BLASxON_S__V_NORM1_H


  #include "esp_attr.h"


  // Vector Datatype
  #include "../../BLASxON/gnd/datatypes/inc/vector.h"


  #ifdef __cplusplus
    extern "C" {
  #endif


    void IRAM_ATTR s__v_norm1(
      float * sclRes,
      const struct vector * vOpr
    )
      __attribute__((nonull))
    ;


  #ifdef __cplusplus
    }
  #endif 


#endif // BLASxON_S__V_NORM1_H


