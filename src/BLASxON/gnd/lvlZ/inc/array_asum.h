/*! This function adds all the elements in an array and returns the sum
 *
 *
 *
 */


#ifndef BLASxON__ARRAY_ASUM_H
  #define BLASxON__ARRAY_ASUM_H


  #include "esp_attr.h"


  #ifdef __cplusplus
    extern "C" {
  #endif


    static inline void BLASxON__FuncHEAD
      __attribute__((always_inline))
      __attribute__((nonull))
    array_asum(
      float * sclRes,            //!< Float pointer for return value
      const float * arrOpr,      //!< Array pointer for elements to sum
      const unsigned int start,  //!< Starting element index to loop across
      const unsigned int end     //!< Last element index to loop across
    ) {
      float res = 0.0;
      for(unsigned int I=start; I<end; ++I){
        res += arrOpr[I];
      }
      *sclRes += res;
      return;
    }


  #ifdef __cplusplus
    }
  #endif 


#endif // BLASxON__ARRAY_ASUM_H


