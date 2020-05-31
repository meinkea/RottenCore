/*! /file vm__m_REigen_m.h
 *
 *  /brief computes the eigenvalues and eigenvectors for a positive symetric matrix
 *
 */


#ifndef BLASxOFF__VM__M_REIGEN_M_H
  #define BLASxOFF__VM__M_REIGEN_M_H


  #include "esp_attr.h"


  #include "../../gnd/datatypes/inc/vector.h"
  #include "../../gnd/datatypes/inc/matrix.h"


  #ifdef __cplusplus
    extern "C" {
  #endif


   float IRAM_ATTR vm__m_REigen_m(
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


#endif // BLASxOFF__VM__M_REIGEN_M_H


