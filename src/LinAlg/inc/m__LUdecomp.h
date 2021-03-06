/*! /file m__LUdecomp.h
 *
 */


#ifndef BLASxON__M__LUdecomp_H
  #define BLASxON__M__LUdecomp_H


  // -- CPU Architecture
  #include "../../BLASxON/gnd/cpu_architecture/cpu_architecture.h"


  // -- BLAS Datatypes
  // #include "../../BLASxON/gnd/datatypes/inc/vector.h"
  #include "../../BLASxON/gnd/datatypes/inc/matrix.h"


  #ifdef __cplusplus
    extern "C" {
  #endif


    void BLASxON__FuncHEAD m__LUdecomp(
      struct matrix * mRes,
      const struct matrix * mOpr,
      struct matrix * mWork 
    )
      __attribute__((nonull))
    ;


  #ifdef __cplusplus
    }
  #endif 


#endif // BLASxON__M__LUdecomp_H


