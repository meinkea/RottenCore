/*! /file v__copy.h
 *
 *  /brief Copy one the data from a source Vector into another Vector
 *
 */


#ifndef BLASxOFF__V__COPY_H
  #define BLASxOFF__V__COPY_H


  #include "esp_attr.h"


  // Vector Datatype
  #include "../../datatypes/inc/vector.h"


  #ifdef __cplusplus
    extern "C" {
  #endif


  void IRAM_ATTR v__copy(
    struct vector * vDst,
    const struct vector * vSrc
  )
    __attribute__((nonull))
  ;


  #ifdef __cplusplus
    }
  #endif 


#endif // BLASxOFF__V__COPY_H


