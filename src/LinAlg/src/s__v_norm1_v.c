/*!  /file s__v_norm1_v.c
 *
 *   /brief Taxicab norm (aka Manhattan norm)
 *
 */


#include "../inc/s__v_norm1_v.h"

#include <math.h>


void s__v_norm1_v(
    float * sclRes,
    const struct vector * vOprA,
    const struct vector * vOprB
  ) {
    float * vA = vOprA->v;
    float * vB = vOprB->v;


    float res = 0.0;
    unsigned int length = vOprA->l;


    for(unsigned int I=0; I<length; ++I) {
      res += fabs(vA[I] - vB[I]);
    }

    * sclRes = res;
    return;
}


