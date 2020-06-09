/*! /file m__m_add_s.h
 *
 */


#ifndef BLASxON__M__M_ADD_S_H
  #define BLASxON__M__M_ADD_S_H


  // -- CPU Architecture
  #include "../../gnd/cpu_architecture/cpu_architecture.h"


  // -- BLAS Datatypes
  // #include "../../gnd/datatypes/inc/vector.h"
  #include "../../gnd/datatypes/inc/matrix.h"


  #ifdef __cplusplus
    extern "C" {
  #endif


    void BLASxON__FuncHEAD m__m_add_s(
      struct matrix * mRes,
      const struct matrix * mOprA,
      const float sOprB
    )
      __attribute__((nonull))
    ;


  #ifdef __cplusplus
    }
  #endif


#endif // BLASTxON__M__M_ADD_S_H


