/*! /file s__v_dot_v.c
 *
 */


#include "../inc/s__v_dot_v.h"


// Level 0
#include "../../BLAS+ON/gnd/lvlZ/inc/array_dot.h"


void s__v_dot_v(
  float * sclRes,
  const struct vector * vOprA,
  const struct vector * vOprB
) {
  array_dot(sclRes, vOprA->v, vOprB->v, 0, vOprA->l);
  return;
}


