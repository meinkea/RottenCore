/*! /file v__v_emult_v.c
 *
 */


#include "../inc/v__v_emult_v.h"


// -- Level Z
#include "../../gnd/lvlZ/inc/array_mult.h"


void v__v_emult_v(
  struct vector * vRes,
  const struct vector * vOprA,
  const struct vector * vOprB
) {
  array_mult(
    vRes->v,
    vOprA->v,
    vOprB->v,
    0,
    vRes->l
  );
  return;
}


