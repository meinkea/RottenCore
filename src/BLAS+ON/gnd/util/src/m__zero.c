/*!
 *
 */


#include "../inc/m__zero.h"

#include "../../lvlZ/inc/array_zero.h"


void mzero(struct matrix * mDst) {
  array_zero(*(mDst->m), 0, mDst->l);
  return;
}


