/*! This function set two arrays together element by element
 *
 *
 *
 */


#ifndef BLASxON__ARRAY_SETINT_H
  #define BLASxON__ARRAY_SETINT_H


  // -- CPU Architecture
  #include "../../cpu_architecture/cpu_architecture.h"


#ifdef __cplusplus
  extern "C" {
#endif


  static void BLASxON__FuncHEAD
    __attribute__((always_inline))
    __attribute__((nonull))
  array_setint(
    int * arrDst,              //!< Array pointer where the result will be stored
    const int intSrc,          //!< Float for the source scalar
    const unsigned int start,  //!< Starting element index to loop across
    const unsigned int end     //!< Last element index to loop across
  ) {
    for(unsigned int I=start; I<end; ++I) {
      arrDst[I] = intSrc;
    }
    return;
  }


#ifdef __cplusplus
  }
#endif 


#endif // BLASxON__ARRAY_SETINT_H

 
