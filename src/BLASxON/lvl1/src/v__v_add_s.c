/*! /file v__v_add_s.c
 *
 */


#include "../inc/v__v_add_s.h"


// level 0
#include "../../gnd/lvlZ/inc/array_ascl.h"


void v__v_add_s(struct vector * vRes, const struct vector * vOpr, const float sclOpr) {
  array_ascl(vRes->v, vOpr->v, sclOpr, 0, vRes->l);
  return;
}


