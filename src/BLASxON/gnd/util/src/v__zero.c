/*!
 *
 */


#include "../inc/v__zero.h"

#include "../../lvlZ/inc/array_zero.h"


void v__zero(struct vector * vDst) {
  array_zero(vDst, 0, vDst->l);
  return;
}


