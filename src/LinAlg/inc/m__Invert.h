/*! /file m__Invert.h
 *
 */


#ifndef BLASxON__M__INVERT_H
  #define BLASxON__M__INVERT_H
  
  
  // -- CPU Architecture
  #include "../../BLASxON/gnd/cpu_architecture/cpu_architecture.h"
  
  
  // -- BLAS Datatypes
  // #include "../../BLASxON/gnd/datatypes/inc/vector.h"
  #include "../../BLASxON/gnd/datatypes/inc/matrix.h"
  
  
  #ifdef __cplusplus
    extern "C" {
  #endif
  
  
    void BLASxON__FuncHEAD m__Invert(
      struct matrix * mRes,       /* A^-1' */
      const struct matrix * mOpr, /* A     */
      struct matrix * mWork       /* A'    */
    )
      __attribute__((nonull))
    ;
  
  
  #ifdef __cplusplus
    }
  #endif
  
  
#endif // BLASxON__M__INVERT_H


