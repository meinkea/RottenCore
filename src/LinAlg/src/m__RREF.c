/*! /file m__RREF.c
 *
 */


#include "../inc/m__RREF.h"


// -- Level 0
#include "../../BLASxON/gnd/lvlZ/inc/array_copy.h"
#include "../../BLASxON/gnd/lvlZ/inc/array_mscl.h"
#include "../../BLASxON/gnd/lvlZ/inc/array_mscladd.h"



void m__RREF(
  struct vector * vRes,       /* b' */
  struct matrix * mRes,       /* A' */
  const struct vector * vOpr, /* b  */
  const struct matrix * mOpr  /* A  */
) {
  
  array_copy(mRes->m[0], mOpr->m[0], 0, mOpr->l);
  array_copy(vRes->v,    vOpr->v,    0, vOpr->l);
  
  
  int I=0;
  int II=0;
  
  // Making identiy matrix ( this should be a seperate function... Bad Andrew )
  m__zero(mRes);
  for(I=0; I<mRes->r; ++I) {
    mRes->m[I][I] = 1.0;
  }
  
  
  float scl = 0.0f;
  
  // Going down the matrix 
  for(I=0; I<(mRes->r); ++I) {
    // scl = 1/a_ii
    scl = 1.0/mRes->m[I][I];
    
    // row_i = row_i * (1/a_ii) >> makes the diagonal element = 1.00
    array_mscl(mRes->m[I], mRes->m[I], scl, 0, mRes->c);
    
    
    /* preform same operation here to other side */
    // Operate on vector
    vRes->v[I] *= scl;
    
    for(II=I+1; II<(mRes->r); ++II) {
      // -b_ij
      scl = (-1.0)*mRes->m[II][I];
      
      // row_j = row_j + (-a_ij * a_in / a_ii) * row_i
      array_mscladd(mRes->m[II], mRes->m[I], scl, mRes->m[II], 0, mRes->c);
      
      /* preform same operation here to other side */
      // Operate on vector
      vRes->v[II] += scl * (vRes->v[I]);
    }
  }
  
  // Going up the matrix
  for(I=(mRes->r -1); I>0; --I) {
    for(II=I -1; II>=0; --II) {
      scl = (-1.0)*mRes->m[II][I];
      
      array_mscladd(mRes->m[II], mRes->m[I], scl, mRes->m[II], 0, mRes->c);
      
      /* preform same operation here to other side */
      vRes->v[II] += scl * (vRes->v[I]);
    }
  }
  return;
}



