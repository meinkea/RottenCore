/*! /file msumdiag.c
 *
 */


#include "../inc/msumdiag.h"


void msumdiag(float * resScl, struct matrix * mOpr) {
  float * m = *(mOpr->m);
  float res = 0;

  for(unsigned int I=0; I<mOpr->l; I+=(mOpr->c+1)) {
    res += m[I];
  }

  *resScl = res;
    
  return;
}


