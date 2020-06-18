/*! \file m__rowpivot.c
 *
 */


#include "../inc/m__rowpivot.h"


void m__rowpivot(
  struct matrix * mOpr
) {
  unsigned int * rp = mOpr->rp;
  float * m = *(mOpr->m);
  const unsigned int mR = mOpr->r;
  const unsigned int mC = mOpr->c;

  for(unsigned int I=0; I<mR; ++I) {
    array_emax(
      rp,
      *m,
      mC
    );
    ++rp;
  }


  return;
}
