/*! /file m__set.c
 *
 */


#include "../inc/m__set.h"


// level 0
#include "../../lvlZ/inc/array_copy.h"


void m__set(
    struct matrix * mDst,
    float * arraySrc
  ) {
    array_copy(*(mDst->m), arraySrc, 0, mDst->l);
    return;
}


