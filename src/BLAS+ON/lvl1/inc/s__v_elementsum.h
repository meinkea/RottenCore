/*! /file s__v_elementsum.h
 *
 */


#ifndef BLASxON_S__V_ELEMENTSUM_H
  #define BLASxON_S__V_ELEMENTSUM_H


  // -- CPU Architecture
  #include "../../gnd/cpu_architecture/cpu_architecture.h"


  // -- BLAS Datatypes
  #include "../../gnd/datatypes/inc/vector.h"
  //#include "../../gnd/datatypes/inc/matrix.h"


  #ifdef __cplusplus
    extern "C" {
  #endif


    void BLASxON__FuncHEAD s__v_elementsum(
      float * sclRes,
      const struct vector * vOpr
    )
      __attribute__((nonull))
    ;


  #ifdef __cplusplus
    }
  #endif 


#endif // BLASxON_S__V_ELEMENTSUM_H


