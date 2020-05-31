/*! /file m__m_multiply_m.h
 *
 *  /brief computes the matrix multiplication between two matricies
 *
 */


#ifndef BLASxOFF__M__M_MULTIPLY_M_H
  #define BLASxOFF__M__M_MULTIPLY_M_H


  #include "esp_attr.h"


  #include "../../gnd/datatypes/inc/matrix.h"


  #ifdef __cplusplus
    extern "C" {
  #endif


    void IRAM_ATTR m__m_multiply_m(
      struct matrix * mRes,
      struct matrix * mOprA,
      struct matrix * mOprB
    )
      __attribute__((nonull))
    ;


  #ifdef __cplusplus
    }
  #endif


#endif // BLASxOFF__M__M_MULTIPLY_M_H


