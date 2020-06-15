/*! This function substract two arrays together element by element
 *
 *
 *
 */


#ifndef BLASxON__ARRAY_SUBTRACT_H
  #define BLASxON__ARRAY_SUBTRACT_H


  // -- CPU Architecture
  #include "../../cpu_architecture/cpu_architecture.h"


#ifdef __cplusplus
  extern "C" {
#endif


  static void BLASxON__FuncHEAD
    __attribute__((always_inline))
    __attribute__((nonull))
  array_sub(
    float * arrRes,      //!< Array pointer where the result will be stored
    const float * arrOprA,     //!< Array pointer for the 1st operand
    const float * arrOprB,     //!< Array pointer for the 2nd operand
    const unsigned int start,  //!< Starting element index to loop across
    const unsigned int end     //!< Last element index to loop across
  ) {
    for(unsigned int I=start; I<end; ++I) {
      arrRes[I] = arrOprA - arrOprB;
    }
    return;
  }


#ifdef __cplusplus
  }
#endif 


#endif // BLASxON__ARRAY_SUBTRACT_H


