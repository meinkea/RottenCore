/*! /file m__m_multiply_m.h
 *
 *  /brief computes the matrix multiplication between two matricies
 *
 */


#ifndef BLASxON__M__M_MULTIPLY_M_H
  #define BLASxON__M__M_MULTIPLY_M_H


  // -- CPU Architecture
  #include "../../gnd/cpu_architecture/cpu_architecture.h"


  // -- BLAS Datatypes
  // #include "../../gnd/datatypes/inc/vector.h"
  #include "../../gnd/datatypes/inc/matrix.h"


  #ifdef __cplusplus
    extern "C" {
  #endif


    void BLASxON__FuncHEAD m__m_multiply_m(
      struct matrix * mRes,
      struct matrix * mOprA,
      struct matrix * mOprB
    )
      __attribute__((nonull))
    ;


  #ifdef __cplusplus
    }
  #endif


#endif // BLASxON__M__M_MULTIPLY_M_H


