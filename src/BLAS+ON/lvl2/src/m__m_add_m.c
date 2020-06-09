/* /file v__m_add_v.c
 *
 */


#include "../inc/m__m_add_m.h"




//#include "../../BLASxON/gnd/lvlZ/inc/array_add.h"


void m__m_add_m(
  struct matrix * mRes,
  const struct matrix * mOprA,
  const struct matrix * mOprB
) {

  array_add(
    mRes->m[0],
    mOprA->m[0],
    mOprB->m[0],
    0,
    mRes->l
  );

  return;
}


