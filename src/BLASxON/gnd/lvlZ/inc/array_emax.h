/*! \file array_emax.h
 *
 */


#ifndef BLASxON__ARRAY_EMAX_H
  #define BLASxON__ARRAY_EMAX_H


  // -- CPU Architecture
  #include "../../cpu_architecture/cpu_architecture.h"


  #ifdef __cplusplus
    extern "C" {
  #endif


    static inline void BLASxON__FuncHEAD
      __attribute__((always_inline))
      __attribute__((nonull))
    array_emax(
      unsigned int * res,
      const float * arrOpr,
      const unsigned int start,
      const unsigned int end,
      const unsigned int jump
    ) {

      unsigned int mark = start;  // Set index to point to second element
      unsigned int indx = start;  // 
      float max = arrOpr[indx];   // Set max value as first array element

      float element = 0.0;

      for(unsigned int I=(start+1); I<(end); ++I) {
        indx += jump;
        element = fabs(arrOpr[indx]);

        if(element > max) {
          max = element;
          mark = I;
        }
        
      } // for loop

      res[mark] = start;
    }

  #ifdef __cplusplus
    }
  #endif


#endif // BLASxON__ARRAY_EMAX_H


