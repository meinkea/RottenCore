/*! /file v__v_add_v.c
 *
 */


#include "../inc/v__v_add_v.h"


// -- Level Z
#include "../../gnd/lvlZ/inc/array_add.h"


void v__v_add_v(
  struct vector * vRes,
  const struct vector * vOprA,
  const struct vector * vOprB
) {
  array_add(
    vRes->v,
    vOprA->v,
    vOprB->v,
    0,
    vRes->l
  );
  return;
}


