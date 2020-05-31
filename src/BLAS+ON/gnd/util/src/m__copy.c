/*! /file m__copy.c
 *
 *
 *
 */


#include "../inc/m__copy.h"


// Level 0
#include "../../lvlZ/inc/array_copy.h"


void m__copy(struct matrix * mDst, const struct matrix * mSrc) {
  array_copy(mDst->m[0], mSrc->m[0], 0, mDst->l);
  return;
}



