/*! /file m__init.h
 * 
 *  /brief Memory Allocation and Initialization function for Matix
 *
 */


#ifndef BLASxOFF__M__INIT_H
  #define BLASxOFF__M__INIT_H


  // -- CPU Architecture
  #include "../../cpu_architecture/cpu_architecture.h"


  // -- BLAS Datatypes
  // #include "../../datatypes/inc/vector.h"
  #include "../../datatypes/inc/matrix.h"


  #ifdef __cplusplus
    extern "C" {
  #endif

    int BLASxON__FuncHEAD m__init(
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


