/*! Robust Euclidean norm computation
 *
 *  Robust computation for computing the L2 (Euclidean) norm.
 *  While not impervious, this method resist Overflows and Underflows
 *
 *  C equivalent to LAPACK's SNMR2 routine
 *  Sauce: http://www.netlib.org/lapack/explore-html/d7/df1/snrm2_8f_source.html
 *
 *  notes:
 *  LAPACK's SNMR2 routine is equivalent SLASSQ
 *  
 */


#ifndef BLASxON_S__V_NORM2_H
  #define BLASxON_S__V_NORM2_H


  #include "esp_attr.h"


  // Vector Datatype
  #include "../../BLASxON/gnd/datatypes/inc/vector.h"


  #ifdef __cplusplus
    extern "C" {
  #endif


    void IRAM_ATTR s__v_norm2(
      float * sclRes,
      const struct vector * vOpr
    )
      __attribute__((nonull))
    ;


  #ifdef __cplusplus
    }
  #endif 


#endif // BLASxON_S__V_NORM2_H


