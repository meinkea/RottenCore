/*! /file v__v_mult_m.h
 *
 */


#ifndef BLASxOFF__V__M_MULT_V_H
  #define BLASxOFF__V__M_MULT_V_H


  #include "esp_attr.h"


  // Vector Datatype
  #include "../../gnd/datatypes/inc/vector.h"
  #include "../../gnd/datatypes/inc/matrix.h"


  #ifdef __cplusplus
    extern "C" {
  #endif


    void IRAM_ATTR v__m_mult_v(
      struct vector * vRes,
      const struct matrix * mOprA,
      const struct vector * vOprB
    )
      __attribute__((nonull))
    ;


  #ifdef __cplusplus
    }
  #endif 


#endif // BLASxOFF__V__M_MULT_V_H


