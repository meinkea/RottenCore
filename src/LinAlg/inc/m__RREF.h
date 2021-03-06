/*! /file m__REF.h
 *
 */


#ifndef BLASxON__M__RREF_H
  #define BLASxON__M__RREF_H
  
  
  // -- CPU Architecture
  #include "../../BLASxON/gnd/cpu_architecture/cpu_architecture.h"
  
  
  // -- BLAS Datatypes
  #include "../../BLASxON/gnd/datatypes/inc/vector.h"
  #include "../../BLASxON/gnd/datatypes/inc/matrix.h"
  
  
  #ifdef __cplusplus
    extern "C" {
  #endif
  
  
    void BLASxON__FuncHEAD m__RREF(
      struct vector * vRes,       /* b' */
      struct matrix * mRes,       /* A' */
      const struct vector * vOpr, /* b  */
      const struct matrix * mOpr  /* A  */
    )
      __attribute__((nonull))
    ;
  
  
  #ifdef __cplusplus
    }
  #endif
  
  
#endif // BLASxON__M__RREF_H


