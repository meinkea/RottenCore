/*! This header file wraps the level1 functions
 * 
 *  Level one function contain BLAS methods with runtime of O(1)
 * 
 */


#ifndef BLAS+ON__LEVEL1_H
  #define BLAS+ON__LEVEL1_H


  #include "inc/v__v_add_s.h"
  #include "inc/v__v_subtract_s.h"
  #include "inc/v__v_mult_s.h"

  #include "inc/v__v_add_v.h"
  #include "inc/v__v_subtract_v.h"
  #include "inc/v__v_mult_v.h"

  #include "inc/s__v_dot_v.h"
  #include "inc/s__v_elementsum.h"
  #include "inc/v__v_cross3_v.h"



#endif // BLAS+ON__LEVEL1_H


