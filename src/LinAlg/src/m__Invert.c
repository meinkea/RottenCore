/*! /file m__Invert.c
 *
 */


#include "../inc/m__Invert.h"


// -- Level 0
#include "../../BLASxON/gnd/lvlZ/inc/array_copy.h"
#include "../../BLASxON/gnd/lvlZ/inc/array_mscl.h"
#include "../../BLASxON/gnd/lvlZ/inc/array_mscladd.h"



void m__Invert(
  struct matrix * mRes,       /* A^-1 */
  const struct matrix * mOpr, /* A    */
  struct matrix * mWork       /* Aw   */
) {
  
  array_copy(mWork->m[0], mOpr->m[0], 0, mOpr->l);
  
  
  
  
  
  // Making identiy matrix ( this should be a seperate function... Bad Andrew )
  m__zero(mRes);
  for(int I=0; I<mRes->r; ++I) {
    mRes->m[I][I] = 1.0;
  }
   
  
  float scl = 0.0f;
  
  // Going down the matrix 
  for(int I=0; I<(mWork->r); ++I) {
    // scl = 1/a_ii
    scl = 1.0/mWork->m[I][I];
    
    // row_i = row_i * (1/a_ii) >> makes the diagonal element = 1.00
    array_mscl(mWork->m[I], mWork->m[I], scl, 0, mWork->c);


    /* preform same operation here to other side */
    // Operate on Res matrix
    array_mscl(mRes->m[I], mRes->m[I], scl, 0, mRes->c);

    for(int II=I+1; II<(mWork->r); ++II) {
      // -b_ij
      scl = (-1.0)*mWork->m[II][I];

      // row_j = row_j + (-a_ij * a_in / a_ii) * row_i
      array_mscladd(mWork->m[II], mWork->m[I], scl, mWork->m[II], 0, mWork->c);
      
      /* preform same operation here to other side */
      // Operate on matrix
      array_mscladd(mRes->m[II], mRes->m[I], scl, mRes->m[II], 0, mRes->c);
    }
  }
  
  // Going up the matrix
  for(int I=(mWork->r -1); I>0; --I) {
    for(int II=I -1; II>=0; --II) {
      scl = (-1.0)*mWork->m[II][I];
      
      array_mscladd(mWork->m[II], mWork->m[I], scl, mWork->m[II], 0, mWork->c);
      
      /* preform same operation here to other side */
      array_mscladd(mRes->m[II], mRes->m[I], scl, mRes->m[II], 0, mRes->c);
    }
  }
  return;
}



