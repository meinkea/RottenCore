/*! /file s__v_norm1.h
 *
 */


#ifndef BLASxON_S__V_NORM1_H
  #define BLASxON_S__V_NORM1_H


  // -- CPU Architecture
  #include "../../BLASxON/gnd/cpu_architecture/cpu_architecture.h"


  // -- BLAS Datatypes
  #include "../../BLASxON/gnd/datatypes/inc/vector.h"
  // #include "../../BLASxON/gnd/datatypes/inc/matrix.h"


  #ifdef __cplusplus
    extern "C" {
  #endif


    void BLASxON__FuncHEAD s__v_norm1(
      float * sclRes,
      const struct vector * vOpr
    )
      __attribute__((nonull))
    ;


  #ifdef __cplusplus
    }
  #endif 


#endif // BLASxON_S__V_NORM1_H


