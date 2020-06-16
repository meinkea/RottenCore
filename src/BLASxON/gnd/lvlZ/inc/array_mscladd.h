/*! \file array_mscladd.h
 *
 *  \brief This function multiplies each element of an array by a scalar, and then adds it to another array
 *
 *
 *
 */


#ifndef BLASxON__ARRAY_MSCLADD_H
  #define BLASxON__ARRAY_MSCLADD_H


  // -- CPU Architecture
  #include "../../cpu_architecture/cpu_architecture.h"


#ifdef __cplusplus
  extern "C" {
#endif


  static void BLASxON__FuncHEAD
    __attribute__((always_inline))
    __attribute__((nonull))
  array_mscladd(
    float * arrRes,            //!< Array pointer where the result will be stored
    const float * arrOprA,     //!< Array pointer for the 1st operand
    const float sclOpr,        //!< float for the 1nd Scalar operand
    const float * arrOprB,     //!< Array pointer for the 2st operand
    const unsigned int start,  //!< Starting element index to loop across
    const unsigned int end     //!< Last element index to loop across
  ) {
    for(unsigned int I=start; I<end; ++I) {
      arrRes[I] = sclOpr*arrOprA[I] + arrOprB[I];
    }
    return;
  }


#ifdef __cplusplus
  }
#endif 


#endif // BLASxON__ARRAY_MSCLADD_H


