/*! /file m__zero.h
 *
 *  /brief Zero out all elements in a vector
 *
 */


#ifndef BLASxOFF__M__ZERO_H
  #define BLASxOFF__M__ZERO_H


  #include "esp_attr.h"


  // Matrix Datatype
  #include "../../datatypes/inc/matrix.h"


  #ifdef __cplusplus
    extern "C" {
  #endif


    // level 0
    void IRAM_ATTR m__zero(
      struct matrix * mDst
    )
      __attribute__((nonull))
    ;


  #ifdef __cplusplus
    }
  #endif


#endif // BLASxOFF__M__ZERO_H


