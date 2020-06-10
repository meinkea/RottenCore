/*! /file m__copy.h 
 *
 *  /brief Copies the content of one matrix to another matrix
 *
 *  There is zero branching cost to run the function
 *
 */


#ifndef BLASxON__M__COPY_H
  #define BLASxON__M__COPY_H


  // -- CPU Architecture
  #include "../../cpu_architecture/cpu_architecture.h"


  // -- BLAS Datatypes
  // #include "../../datatypes/inc/vector.h"
  #include "../../datatypes/inc/matrix.h"


  #ifdef __cplusplus
    extern "C" {
  #endif


    void BLASxON__FuncHEAD m__copy(
      struct matrix * mRes,
      const struct matrix * mSrc
    )
      __attribute((nonull))
    ;
  

  #ifdef __cplusplus
    }
  #endif
  

#endif // BLASxON__M__COPY_H


