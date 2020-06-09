/*! /file v__v_sub_s.h
 *
 */


#ifndef BLASxON_V__V_SUB_S_H
  #define BLASxON_V__V_SUB_S_H


  // -- CPU Architecture
  #include "../../gnd/cpu_architecture/cpu_architecture.h"


  // -- BLAS Datatypes
  #include "../../gnd/datatypes/inc/vector.h"
  // #include "../../gnd/datatypes/inc/matrix.h"


  #ifdef __cplusplus
    extern "C" {
  #endif


    void BLASxON__FuncHEAD v__v_sub_s(
    struct vector * vRes,
    const struct vector * vOpr,
    const float * sclOpr
    )
      __attribute__((nonull))
    ;


  #ifdef __cplusplus
    }
  #endif 


#endif // BLASxON_V__V_SUB_S_H


