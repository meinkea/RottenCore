/* /file v__m_mult_v.c
 *
 */

#include "../inc/v__m_mult_v.h"


#include "../../gnd/datatypes/inc/matrix.h"
#include "../../gnd/datatypes/inc/vector.h"


#include "../../gnd/lvlZ/inc/array_dot.h"


void v__m_mult_v(
  struct vector * restrict vRes,
  const struct matrix * restrict mOprA,
  const struct vector * restrict vOprB
) {
  const unsigned int Re   = vRes->l;
  const unsigned int AcBe = mOprA->c;

  float * restrict vR =   vRes->v;
  float * restrict mA = *(mOprA->m);

  const float * restrict vB = vOprB->v;

  for(unsigned int I=0; I<Re; ++I) {
    array_dot(
      vR,
      mA,
      vB,
      0,
      AcBe
    );

    vR += 1;
    mA += AcBe;
  }

  return;
}


