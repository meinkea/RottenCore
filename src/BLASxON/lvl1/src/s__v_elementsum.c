/*! /file s__v_elementsum.c
 *
 */


#include "../inc/s__v_elementsum.h"


// level 0
#include "../../gnd/lvlZ/inc/array_asum.h"


void s__v_elementsum(
    float * sclRes,
    const struct vector * vOpr
  ) {
    *sclRes = 0.0f;
    array_asum(sclRes, vOpr->v, 0, vOpr->l);
    return;
}


