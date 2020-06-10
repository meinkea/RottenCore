/*! This function substract two arrays together element by element
 *
 *
 *
 */


#ifndef ARRAY_SUBTRACT_H
  #define ARRAY_SUBTRACT_H


  #include "esp_attr.h"


#ifdef __cplusplus
  extern "C" {
#endif


  static void IRAM_ATTR
    __attribute__((always_inline))
    __attribute__((nonull))
  array_substract(
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


#endif // ARRAY_SUBTRACT_H


