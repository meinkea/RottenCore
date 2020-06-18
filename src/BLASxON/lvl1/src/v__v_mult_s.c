/*! /file v__v_mult_s.c
 *
 */


#include "../inc/v__v_mult_s.h"


// -- Level Z
#include "../../gnd/lvlZ/inc/array_mscl.h"


void v__v_mult_s(
  struct vector * vRes,
  const struct vector * vOpr,
  const float sclOpr
) {
  array_mscl(
    vRes->v,
    vOpr->v,
    sclOpr,
    0,
    vOpr->l
  );
  return;
}


