/*! /file m__m_div_s.c
 *
 */


#include "../inc/m__m_div_s.h"


// -- Level Z
#include "../../gnd/lvlZ/inc/array_mscl.h"


void m__m_div_s(
  struct matrix * mRes,
  const struct matrix * mOpr,
  const float sclOpr
) {
  array_mscl(
    mRes->m[0],
    mOpr->m[0],
    (1.0/sclOpr),
    0,
    mRes->l
  );
  return;
}


