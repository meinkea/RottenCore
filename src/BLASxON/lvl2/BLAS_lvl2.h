/*! This header file wraps the level2 functions
 * 
 *  Level two function contain BLAS methods with runtime of O(2)
 * 
 */


#ifndef BLASxON__LEVEL2_H
  #define BLASxON__LEVEL2_H


  #include "inc/m__m_add_m.h"
  #include "inc/m__m_add_s.h"
  #include "inc/m__m_div_s.h"
  #include "inc/m__m_mult_s.h"
  #include "inc/m__m_sub_m.h"
  #include "inc/m__m_sub_s.h"
  #include "inc/msumdiag.h"     // Sums the diagonal elements of a matrix
  #include "inc/v__m_mult_v.h"  // Transform apply to a vector (Vector = Matrix * Vector  or  b=Ax)


#endif // BLASxON_ _LEVEL2_H


