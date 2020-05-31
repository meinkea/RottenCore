/*! /file v__v_subtract_v.c
 *
 */


#include "../inc/v__v_subtract_v.h"


// level 0
#include "../../gnd/lvlZ/inc/array_subtract.h"


void v__v_subtract_v(
    struct vector * vRes,
    const struct vector * vOprA,
    const struct vector * vOprB
  ) {
    array_subtract(vRes->v, vOprA->v, vOprB->v, 0, vRes->l); 
    return;
}


