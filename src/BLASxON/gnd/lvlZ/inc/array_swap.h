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
    float * arrOprA,     //!< Array pointer for the 1st operand
    float * arrOprB,     //!< Array pointer for the 2nd operand
    const unsigned int start,  //!< Starting element index to loop across
    const unsigned int end     //!< Last element index to loop across
  ) {
    float temp = 0.0f;
    for(unsigned int I; I<end; ++I) {
      temp = arrOprA[I];
      arrOprA[I] = arrOprB[I];
      arrOprB[I] = temp;
    }
    return;
  }


#ifdef __cplusplus
  }
#endif 


#endif // BLASxON__ARRAY_SWAP_H

 
