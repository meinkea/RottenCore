/*! /file m__setrow.c
 *
 */


#include "../inc/m__setrow.h"


// level 0
#include "../../lvlZ/inc/array_copy.h"


void m__setrow(
    struct matrix * mDst,
    const float * arraySrc,
    const unsigned int row
  ) {
    array_copy(mDst->m[row], arraySrc, 0, mDst->c);
    return;
}


