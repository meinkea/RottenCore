/*! This function swap two arrays together element by element
 *
 *
 *
 */


#ifndef BLASxON__ARRAY_SWAP_H
  #define BLASxON__ARRAY_SWAP_H


  // -- CPU Architecture
  #include "../../cpu_architecture/cpu_architecture.h"


#ifdef __cplusplus
  extern "C" {
#endif


  static void BLASxON__FuncHEAD
    __attribute__((always_inline))
    __attribute__((nonull))
  array_swap(
    float * arrSrcDstA,
    float * arrSrcDstB
  ) {
    float * temp = arrSrcDstA;
  
    arrSrcDstA = arrSrcDstB;
    arrSrcDstB = temp;
  
    return;
  }


#ifdef __cplusplus
  }
#endif 


#endif // BLASxON__ARRAY_SWAP_H

 
