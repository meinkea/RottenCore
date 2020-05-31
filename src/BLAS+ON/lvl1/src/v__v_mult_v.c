/*! /file v__v_mult_v.c
 *
 */


#include "../inc/v__v_mult_v.h"


#include "../../gnd/lvlZ/inc/array_mult.h"


void v__v_mult_v(struct vector * vRes, const struct vector * vOprA, const struct vector * vOprB) {
  array_mult(vRes->v, vOprA->v, vOprB->v, 0, vRes->l);
  return;
}


