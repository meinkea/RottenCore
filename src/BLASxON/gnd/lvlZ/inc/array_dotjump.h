/*! This function computes the dot product between two arrays
 *
 */


#ifndef BLASxOFF__ARRAY_DOTJUMP_H
  #define BLASxOFF__ARRAY_DOTJUMP_H


  #include "esp_attr.h"


  #ifdef __cplusplus
    extern "C" {
  #endif


    static inline void IRAM_ATTR
      __attribute__((always_inline))
      __attribute__((nonull))
    array_dotjump(
      float * sclRes,            //!< Array pointer where the result will be stored
      const float * arrOprA,     //!< Array pointer for the 1st operand
      const float * arrOprB,     //!< Array pointer for the 2nd operand
      const unsigned int start,  //!< Starting element index to loop across
      const unsigned int end,    //!< Last element index to loop across
      const unsigned int jump    //!< Index increment for 2nd operand
    ) {
      float sum = 0.0f;
      for(unsigned int I=start, II=start; I<end; ++I, II+=jump) {
        sum += arrOprA[I] * arrOprB[II];
      }
      *sclRes = sum;
      return;
    }


  #ifdef __cplusplus
    }
  #endif 


#endif // BLASxOFF__ARRAY_DOT_H


