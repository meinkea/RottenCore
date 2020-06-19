/*! /file m__m_sub_m.c
 *
 */


#include "../inc/m__m_sub_m.h"


// -- Level Z
#include "../../gnd/lvlZ/inc/array_sub.h"


void m__m_sub_m(
  struct matrix * mRes,
  const struct matrix * mOprA,
  const struct matrix * mOprB
) {
  array_sub(
    mRes->m[0],
    mOprA->m[0],
    mOprB->m[0],
    0,
    mRes->l
  );
  return;
}


