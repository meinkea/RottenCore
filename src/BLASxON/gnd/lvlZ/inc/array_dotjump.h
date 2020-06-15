/*! This function computes the dot product between two arrays
 *
 */


#ifndef BLASxON__ARRAY_DOTJUMP_H
  #define BLASxON__ARRAY_DOTJUMP_H


  // -- CPU Architecture
  #include "../../cpu_architecture/cpu_architecture.h"


  #ifdef __cplusplus
    extern "C" {
  #endif


    static inline void BLASxON__FuncHEAD
      __attribute__((always_inline))
      __attribute__((nonull))
    array_dotjump(
      float * sclRes,             //!< Array pointer where the result will be stored
      const float * arrOprA,      //!< Array pointer for the 1st operand
      const float * arrOprB,      //!< Array pointer for the 2nd operand
      const unsigned int startA,  //!< Starting A element index to loop across
      const unsigned int startB,  //!< Starting B element index to loop across
      const unsigned int end,     //!< Last element index to loop across
      const unsigned int jump     //!< Index increment for 2nd operand
    ) {
      float sum = 0.0f;
      for(unsigned int I=startA, II=startB; I<end; ++I, II+=jump) {
        sum += arrOprA[I] * arrOprB[II];
      }
      *sclRes = sum;
      return;
    }


  #ifdef __cplusplus
    }
  #endif 


#endif // BLASxON__ARRAY_DOT_H


