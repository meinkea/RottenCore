/*! /file m__m_add_m.h
 *
 */


#ifndef BLASxOFF__M__M_ADD_M_H
  #define BLASxOFF__M__M_ADD_M_H


  #include "esp_attr.h"


  // BLAS Datatype
  #include "../../gnd/datatypes/inc/matrix.h"


  #ifdef __cplusplus
    extern "C" {
  #endif


    void IRAM_ATTR m__m_add_m(
      struct matrix * mRes,
      const struct matrix * mOprA,
      const struct matrix * mOprB,
    )
      __attribute__((nonull))
    ;


  #ifdef __cplusplus
    }
  #endif


#endif // BLASxOFF__M__M_ADD_M_H


