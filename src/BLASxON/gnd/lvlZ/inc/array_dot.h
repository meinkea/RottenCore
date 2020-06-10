/*! This function computes the dot product between two arrays
 *
 */


#ifndef BLASxOFF__ARRAY_DOT_H
  #define BLASxOFF__ARRAY_DOT_H


  // -- CPU Architecture
  #include "../../gnd/cpu_architecture/cpu_architecture.h"


  #ifdef __cplusplus
    extern "C" {
  #endif


    static inline void IRAM_ATTR
      __attribute__((always_inline))
      __attribute__((nonull))
    array_dot(
      float * sclRes,            //!< Array pointer where the result will be stored
      const float * arrOprA,     //!< Array pointer for the 1st operand
      const float * arrOprB,     //!< Array pointer for the 2nd operand
      const unsigned int start,  //!< Starting element index to loop across
      const unsigned int end     //!< Last element index to loop across
    ) {
      float sum = 0.0f;
      for(unsigned int I=start; I<end; ++I) {
        sum += arrOprA[I] * arrOprB[I];
      }
      *sclRes = sum;
      return;
    }


  #ifdef __cplusplus
    }
  #endif 


#endif // BLASxOFF__ARRAY_DOT_H


