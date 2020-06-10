/*! /file v__v_mult_m.h
 *
 */


#ifndef BLASxON__V__M_MULT_V_H
  #define BLASxON__V__M_MULT_V_H


  // -- CPU Architecture
  #include "../../gnd/cpu_architecture/cpu_architecture.h"


  // -- BLAS Datatypes
  #include "../../gnd/datatypes/inc/vector.h"
  #include "../../gnd/datatypes/inc/matrix.h"


  #ifdef __cplusplus
    extern "C" {
  #endif


    void BLASxON__FuncHEAD v__m_mult_v(
      struct vector * vRes,
      const struct matrix * mOprA,
      const struct vector * vOprB
    )
      __attribute__((nonull))
    ;


  #ifdef __cplusplus
    }
  #endif 


#endif // BLASxON__V__M_MULT_V_H


