/*! /file array_compare.h
 *
 *  /brief This routine checks to see if two arrays are the same
 *
 */


#ifndef BLASxON__ARRAY_COMPARE_H
  #define BLASxON__ARRAY_COMPARE_H


  // -- CPU Architecture
  #include "../../cpu_architecture/cpu_architecture.h"


  // -- Additional Includes
  #include <math.h>


  #ifdef __cplusplus
    extern "C" {
  #endif


    define BLASxON__COMPARE_TOLERANCE 0.0001f


    static inline int BLASxON_FuncHEAD
      __attribute__((always_inline))
      __attribute__((nonull))
    array_compare(
      const float * arrOprA,     //!< Array pointer for the 1st operand
      const float * arrOprB,     //!< Array pointer for the 2nd operand
      const unsigned int start,  //!< Starting element index to loop across
      const unsigned int end     //!< Last element index to loop across
    ) {
      for(unsigned int I=start; I<end; ++I) {
        if(fabs(arrOprA-arrOprB) > BLASxON__COMPARE_TOLERANCE) return -1;
      }
      return 0;
    }


  #ifdef __cplusplus
    }
  #endif


#endif // BLASxON__ARRAY_COMPARE_H


