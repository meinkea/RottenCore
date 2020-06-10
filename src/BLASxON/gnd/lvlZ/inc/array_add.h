/*! This function add two arrays together element by element
 *
 *
 *
 */


#ifndef ARRAY_ADD_H
  #define ARRAY_ADD_H


  // -- CPU Architecture
  #include "../../gnd/cpu_architecture/cpu_architecture.h"


  #ifdef __cplusplus
    extern "C" {
  #endif


    static inline void IRAM_ATTR
      __attribute__((always_inline))
      __attribute__((nonull))
    array_add(
      float * arrRes,            //!< Array pointer where the result will be stored
      const float * arrOprA,     //!< Array pointer for the 1st operand
      const float * arrOprB,     //!< Array pointer for the 2nd operand
      const unsigned int start,  //!< Starting element index to loop across
      const unsigned int end     //!< Last element index to loop across
    ) {
      for(unsigned int I=start; I<end; ++I) {
        arrRes[I] = arrOprA[I] + arrOprB[I];
      }
      return;
    }


  #ifdef __cplusplus
    }
  #endif 


#endif // ARRAY_ADD_H


