/*! /file vaxsy.h
 *
 */


#ifndef BLASxON_V__V_SUBTRACT_V_H
  #define BLASxON_V__V_SUBTRACT_V_H


  // -- CPU Architecture
  #include "../../gnd/cpu_architecture/cpu_architecture.h"


  // -- BLAS Datatypes
  #include "../../gnd/datatypes/inc/vector.h"
  // #include "../../gnd/datatypes/inc/matrix.h"


  #ifdef __cplusplus
    extern "C" {
  #endif


    void BLASxON__FuncHEAD v__v_subtract_v(
      struct vector * vRes,
      const struct vector * vOprA,
      const struct vector * vOprB
    )
      __attribute__((nonull))
    ;


  #ifdef __cplusplus
    }
  #endif 


#endif // BLASxON_V__V_SUBTRACT_V_H


