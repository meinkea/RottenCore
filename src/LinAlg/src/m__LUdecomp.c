/*! \file m__LUdecomp.c
 *
 *  \brief Factors a square matrix into two triangle matricies.
 *
 *  It is always possible to factor a square matrix into a
 *    lower traingle matrix and an upper triangle matrix.
 *
 */


#include "../inc/m__LUdecomp.h"


// -- Level 0
#include "../../BLASxON/gnd/lvlZ/inc/array_copy.h"
#include "../../BLASxON/gnd/lvlZ/inc/array_mscl.h"
#include "../../BLASxON/gnd/lvlZ/inc/array_mscladd.h"




void m__LUdecomp(
  struct matrix * mRes,
  const struct matrix * mOpr,
  struct matrix * mWork 
) {
  
  array_copy(mWork->m[0], mOpr->m[0], 0, mOpr->l);
  
  int I=0;
  int II=0;
  
  // Making identiy matrix ( this should be a seperate function... Bad Andrew )
  m__zero(mRes);
  for(int I=0; I<mRes->l; ++I) {
    mRes->m[0][I] = 1.0;
  }
  
  float scl0 = 0.0f;
  float scl1 = 0.0f;
  
  // Going down the matrix 
  for(I=0; I<(mWork->r); ++I) {
    // scl = 1/a_ii
    scl0 = 1.0/mWork->m[I][I];
    
    // row_i = row_i * (1/a_ii) >> makes the diagonal element = 1.00
    array_mscl(mWork->m[I], mWork->m[I], scl0, 0, mWork->c);
    
    
    /* preform same operation here to other side */
    // Operate on Res matrix
    // array_mscl(mRes->m[I], mRes->m[I], scl, 0, mRes->c);
    
    for(II=I+1; II<(mWork->r); ++II) {
      // -b_ij
      scl1 = (-1.0)*mWork->m[II][I];
      
      // row_j = row_j + (-a_ij * a_in / a_ii) * row_i
      array_mscladd(mWork->m[II], mWork->m[I], scl1, mWork->m[II], 0, mWork->c);
      
      /* preform same operation here to other side */
      // Operate on matrix
      mRes->m[II][I] = (-1.0)*scl1*scl0;
    }
  }
  
  
  //  // Going up the matrix
  //  for(I=(mWork->r -1); I>0; --I) {
  //    for(II=I -1; II>=0; --II) {
  //      scl = (-1.0)*mWork->m[II][I];
  //      
  //      array_mscladd(mWork->m[II], mWork->m[I], scl, mWork->m[II], 0, mWork->c);
  //      
  //      /* preform same operation here to other side */
  //      array_mscladd(mRes->m[II], mRes->m[I], scl, mRes->m[II], 0, mRes->c);
  //    }
  //  }
  return;
}


