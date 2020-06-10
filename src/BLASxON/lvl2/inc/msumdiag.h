/*! /file msumdiag.h
 *
 *  /brief Sums the diagonal elements of a matrix
 *
 */


#ifndef BLASxON_MSUMDIAG_H
  #define BLASxON_MSUMDIAG_H


  // -- CPU Architecture
  #include "../../gnd/cpu_architecture/cpu_architecture.h"


  // -- BLAS Datatypes
  // #include "../../gnd/datatypes/inc/vector.h"
  #include "../../gnd/datatypes/inc/matrix.h"


  #ifdef __cplusplus
    extern "C" {
  #endif


    void BLASxON__FuncHEAD msumdiag(
      float * sclRes,
      struct matrix * mOpr
    )
      __attribute__((nonull)) 
    ;


  #ifdef __cplusplus
    }
  #endif


#endif // BLASxON_MSUMDIAG_H


