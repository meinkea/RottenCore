/*! /file m__m_add_m.h
 *
 */


#ifndef BLASxON__M__M_ADD_M_H
  #define BLASxON__M__M_ADD_M_H


  // -- CPU Architecture
  #include "../../gnd/cpu_architecture/cpu_architecture.h"


  // -- BLAS Datatypes
  // #include "../../gnd/datatypes/inc/vector.h"
  #include "../../gnd/datatypes/inc/matrix.h"


  #ifdef __cplusplus
    extern "C" {
  #endif


    void BLASxON__FuncHEAD m__m_add_m(
      struct matrix * mRes,
      const struct matrix * mOprA,
      const struct matrix * mOprB
    )
      __attribute__((nonull))
    ;


  #ifdef __cplusplus
    }
  #endif


#endif // BLASxON__M__M_ADD_M_H


