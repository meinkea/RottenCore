/*! /file s__v_elementsum.h
 *
 */


#ifndef BLASxOFF_S__V_ELEMENTSUM_H
  #define BLASxOFF_S__V_ELEMENTSUM_H


  #include "esp_attr.h"


  // Vector Datatype
  #include "../../gnd/datatypes/inc/vector.h"


  #ifdef __cplusplus
    extern "C" {
  #endif


    void IRAM_ATTR s__v_elementsum(
      float * sclRes,
      const struct vector * vOpr
    )
      __attribute__((nonull))
    ;


  #ifdef __cplusplus
    }
  #endif 


#endif // BLASxOFF_S__V_ELEMENTSUM_H


