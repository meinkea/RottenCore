/*! /file vm__m_REigen_m.h
 *
 *  /brief computes the eigenvalues and eigenvectors for a positive symetric matrix
 *
 */


#ifndef BLASxON__VM__M_REIGEN_M_H
  #define BLASxON__VM__M_REIGEN_M_H


  // -- CPU Architecture
  #include "../../gnd/cpu_architecture/cpu_architecture.h"


  // -- BLAS Datatypes
  #include "../../gnd/datatypes/inc/vector.h"
  #include "../../gnd/datatypes/inc/matrix.h"


  #ifdef __cplusplus
    extern "C" {
  #endif


   float BLASxON__FuncHEAD vm__m_REigen_m(
      struct vector * vEigenVal,
      struct matrix * mEigenVec,
      const struct matrix * mA,
      struct matrix * mWork
    )
      __attribute__((nonull))
    ;


  #ifdef __cplusplus
    }
  #endif


#endif // BLASxON__VM__M_REIGEN_M_H


