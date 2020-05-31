/*! /file v__init.h
 *
 *  /brief Memory Allocation and Initializtion function for Vectors
 *
 */


#ifndef BLASxOFF__V__INIT_H
  #define BLASxOFF__V__INIT_H


  #include <stdint.h>

  #include "esp_attr.h"


  // General Vector Datatype
  #include "../../datatypes/inc/vector.h"


#ifdef __cplusplus
  extern "C" {
#endif

  int IRAM_ATTR v__init(
    struct vector * pV,
    const unsigned int l,
    const char * name,
    const uint32_t memory_capability
  )
    __attribute__((nonull))
  ;

#ifdef __cplusplus
  }
#endif

#endif // BLASxOFF__V__INIT_H


