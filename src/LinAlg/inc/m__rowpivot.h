/*! \file m__rowpivot.h
 *
 */


#ifndef LINALG__M__ROWPIVOT_H
  #define LINALG__M__ROWPIVOT_H


  // -- CPU Architecture
  #include "../../BLASxON/gnd/cpu_architecture/cpu_architecture.h"


  // -- BLAS Datatypes
  #include "../../BLASxON/gnd/datatypes/inc/vector.h"
  #include "../../BLASxON/gnd/datatypes/inc/matrix.h"


  #ifdef __cplusplus
    extern "C" {
  #endif


    void BLASxON__FuncHEAD m__rowpivot(
      struct matrix * mOpr
    )
      __attribute__((nonull))
    ;


  #ifdef __cplusplus
    }
  #endif 


#endif // LINALG__M__ROWPIVOT_H


