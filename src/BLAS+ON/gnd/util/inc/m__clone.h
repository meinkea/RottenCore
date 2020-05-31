/*! /file m__clone.h
 *
 *  /brief Copies the content of one matrix to another matrix
 *
 */


#ifndef BLASxOFF__M__CLONE_H
  #define BLASxOFF__M__CLONE_H


  #include "esp_attr.h"


  #include "../../datatypes/inc/matrix.h"


  // Additional
  #include <stdint.h>


  #ifdef __cplusplus
    extern "C" {
  #endif


    void IRAM_ATTR m__clone(
      struct matrix * mRes,
      const struct matrix * mSrc,
      const char * name,
      const uint32_t memory_capability
    )
      __attribute__((nonull))
    ;


  #ifdef __cplusplus
    }
  #endif


#endif // BLASxOFF__M__CLONE_H


