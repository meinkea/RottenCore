/*! /file m__copy.h 
 *
 *  /brief Copies the content of one matrix to another matrix
 *
 *  There is zero branching cost to run the function
 *
 */


#ifndef BLASxOFF__M__COPY_H
  #define BLASxOFF__M__COPY_H


  #include "esp_attr.h"


  #include "../../datatypes/inc/matrix.h"


#ifdef __cplusplus
  extern "C" {
#endif


  void IRAM_ATTR m__copy(
    struct matrix * mRes,
    const struct matrix * mSrc
  )
    __attribute((nonull))
  ;


#ifdef __cplusplus
  }
#endif
  

#endif // BLASxOFF__M__COPY_H


