/*!
 *
 */


#include "../inc/v__copy.h"


// Level 0
#include "../../lvlZ/inc/array_copy.h"


void vcopy(struct vector * vDst, const struct vector * vSrc) {
  array_copy(vDst->v, vSrc->v, 0, vDst->l);
  return;
}


