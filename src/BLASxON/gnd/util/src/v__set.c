/*! /file v__set.c
 *
 */


#include "../inc/v__set.h"


// level Z
#include "../../lvlZ/inc/array_copy.h"


void v__set(
    struct vector * vDst,
    const float * arraySrc
  ) {
    array_copy(vDst->v, arraySrc, 0, vDst->l);
    return;
}


