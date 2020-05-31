/*! /file s__v_norm1.h
 *
 */


#ifndef BLASxOFF_S__V_NORM1_H
  #define BLASxOFF_S__V_NORM1_H


  #include "esp_attr.h"


  // Vector Datatype
  #include "../../BLAS+ON/gnd/datatypes/inc/vector.h"


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


#endif // BLASxOFF_S__V_NORM1_H


