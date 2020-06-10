/*! This header file wraps the level1 functions
 * 
 *  Level one function contain BLAS methods with runtime of O(1)
 * 
 */


#ifndef BLASxON__LEVEL1_H
  #define BLASxON__LEVEL1_H


  #include "inc/v__v_add_s.h"
  #include "inc/v__v_subtract_s.h"
  #include "inc/v__v_mult_s.h"

  #include "inc/v__v_add_v.h"
  #include "inc/v__v_subtract_v.h"
  #include "inc/v__v_mult_v.h"

  #include "inc/s__v_elementsum.h"


#endif // BLASxON__LEVEL1_H


