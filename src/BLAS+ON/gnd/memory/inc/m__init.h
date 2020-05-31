/*! /file m__init.h
 * 
 *  /brief Memory Allocation and Initialization function for Matix
 *
 */


#ifndef BLASxOFF__M__INIT_H
  #define BLASxOFF__M__INIT_H


  #include <stdint.h>


  #include "esp_attr.h"


  // General Matrix Datatype
  #include "../../datatypes/inc/matrix.h"


  #ifdef __cplusplus
    extern "C" {
  #endif

    int IRAM_ATTR m__init(
      struct matrix * pM,
      const unsigned int r,
      const unsigned int c,
      const char * name, 
      const uint32_t memory_capability
    )
      __attribute__((nonull))
    ;

  #ifdef __cplusplus
    }
  #endif

#endif // BLASxOFF__M__INIT_H


