/*! /file msumdiag.h
 *
 *  /brief Sums the diagonal elements of a matrix
 *
 */


#ifndef BLASxOFF_MSUMDIAG_H
  #define BLASxOFF_MSUMDIAG_H


  #include "esp_attr.h"


  #include "../../gnd/datatypes/inc/matrix.h"


  #ifdef __cplusplus
    extern "C" {
  #endif


    void IRAM_ATTR msumdiag(
      float * sclRes,
      struct matrix * mOpr
    )
      __attribute__((nonull)) 
    ;


  #ifdef __cplusplus
    }
  #endif


#endif // BLASxOFF_MSUMDIAG_H


