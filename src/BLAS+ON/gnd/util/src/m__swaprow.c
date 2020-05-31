/*! /file m__swaprow.c
 *
 */


#include "../inc/m__swaprow.h"


// level 0


void m__swaprow(
    struct matrix * mDst,
    const unsigned int row1,
    const unsigned int row2
  ) {
    float * mr1 = *(mDst->m +row1);
    float * mr2 = *(mDst->m +row2);
    const unsigned int mC = mDst->c;

    float tmp = 0.0f;
    for(unsigned int I=0; I<mC; ++I) {
      tmp    = mr1[I];
      mr1[I] = mr2[I];
      mr2[I] = tmp;
    }
    
    return;
}


