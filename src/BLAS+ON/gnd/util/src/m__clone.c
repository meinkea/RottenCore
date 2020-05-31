/*!
 *
 *
 *
 */


#include "../inc/m__clone.h"


// Level 0
#include "../../lvlZ/inc/array_copy.h"


// memory
#include "../../memory/inc/m__init.h"


void m__clone(
    struct matrix * mDst,
    const struct matrix * mSrc,
    const char * name,
    const uint32_t memory_capability
  ) {
    minit(mDst, mSrc->r, mSrc->c, name, memory_capability);
    array_copy(mDst->m[0], mSrc->m[0], 0, mDst->l);
    return;
}



