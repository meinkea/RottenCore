/*!  /file s__v_norm1.c
 *
 *   /brief Taxicab norm (aka Manhattan norm)
 *
 */


#include "../inc/s__v_norm1.h"

#include <math.h>


void s__v_norm1(
    float * sclRes,
    const struct vector * vOpr
  ) {
    float * v = vOpr->v;

    float res = 0.0;
    unsigned int length = vOpr->l;


    for(unsigned int I=0; I<length; ++I) {
      res += fabs(v[I]);
    }

    * sclRes = res;
    return;
}


