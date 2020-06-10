/*! This function multiplies each element of an array by a scalar
 *
 *
 *
 */


#ifndef BLASxON__ARRAY_MSCL_H
  #define BLASxON__ARRAY_MSCL_H


  // -- CPU Architecture
  #include "../../cpu_architecture/cpu_architecture.h"


#ifdef __cplusplus
  extern "C" {
#endif


  static void IRAM_ATTR 
    __attribute__((always_inline))
    __attribute__((nonull))
  array_mscl(
    float * arrRes,            //!< Array pointer where the result will be stored
    const float * arrOpr,      //!< Array pointer for the 1st operand
    const float sclOpr,        //!< float for the 2nd Scalar operand
    const unsigned int start,  //!< Starting element index to loop across
    const unsigned int end     //!< Last element index to loop across
  ) {
    for(unsigned int I=start; I<end; ++I) {
      arrRes[I] = sclOpr * arrOpr[I];
    }
    return;
  }


#ifdef __cplusplus
  }
#endif 


#endif // BLASxON__ARRAY_MSCL_H


