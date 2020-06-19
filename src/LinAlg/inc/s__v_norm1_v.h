/*! /file s__v_norm1_v.h
 *
 */


#ifndef BLASxON_V__V_NORM1_V_H
  #define BLASxON_V__V_NORM1_V_H


  // -- CPU Architecture
  #include "../../BLASxON/gnd/cpu_architecture/cpu_architecture.h"


  // -- BLAS Datatypes
  #include "../../BLASxON/gnd/datatypes/inc/vector.h"
  // #include "../../BLASxON/gnd/datatypes/inc/matrix.h"


  #ifdef __cplusplus
    extern "C" {
  #endif


    void BLASxON__FuncHEAD s__v_norm1_v(
      float * sclRes,
      const struct vector * vOprA,
      const struct vector * vOprB
    )
      __attribute__((nonull))
    ;


  #ifdef __cplusplus
    }
  #endif 


#endif // BLASxON_V__V_NORM1_V_H


