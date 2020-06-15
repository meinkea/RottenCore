/*! This function copies the elements of one arrays into another array
 *
 *
 *
 */


#ifndef BLASxON__ARRAY_COPY_H
  #define BLASxON__ARRAY_COPY_H


  // -- CPU Architecture
  #include "../../cpu_architecture/cpu_architecture.h"


  #ifdef __cplusplus
    extern "C" {
  #endif

    static void BLASxON__FuncHEAD
      __attribute__((always_inline))
      __attribute__((nonull))
    array_copy(
      float * arrDst,            //!< Array pointer destination to copy source data into
      const float * arrSrc,      //!< Array pointer for source data
      const unsigned int start,  //!< Starting element index to loop across
      const unsigned int end     //!< Last element index to loop across
    ) {
      for(unsigned int I=start; I<end; ++I) {
        arrDst[I] = arrSrc[I];
      }
      return;
    }


  #ifdef __cplusplus
    }
  #endif 


#endif // BLASxON__ARRAY_COPY_H


