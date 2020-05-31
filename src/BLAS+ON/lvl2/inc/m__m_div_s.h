/*! /file m__m_div_s.h
 *
 */


#ifndef BLASxOFF__M__M_DIV_S_H
  #define BLASxOFF__M__M_DIV_S_H


  #include "esp_attr.h"


  // BLAS Datatype
  #include "../../gnd/datatypes/inc/matrix.h"


  #ifdef __cplusplus
    extern "C" {
  #endif


    void IRAM_ATTR m__m_div_s(
      struct matrix * mRes,
      const struct matrix * mOprA,
      const float sOprB
    )
      __attribute__((nonull))
    ;


  #ifdef __cplusplus
    }
  #endif


#endif // BLASTxON__M__M_DIV_S_H


