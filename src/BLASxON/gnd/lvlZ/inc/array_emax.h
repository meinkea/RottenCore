/*! \file array_emax.h
 *
 */


#ifndef BLASxON__ARRAY_EMAX_H
  #define BLASxON__ARRAY_EMAX_H


  // -- CPU Architecture
  #include "../../cpu_architecture/cpu_architecture.h"


  #ifdef __cplusplus
    extern "C" {
  #endif


    static inline void BLASxON__FuncHEAD
      __attribute__((always_inline))
      __attribute__((nonull))
    array_emax(
      float * restrict res,
      const float * arrOpr
      const float jump
    ) {
      *res = 0;


    }


  #ifdef __cplusplus
    }
  #endif


#endif // BLASxON__ARRAY_EMAX_H


