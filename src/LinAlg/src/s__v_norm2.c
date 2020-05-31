/*! /file s__v_norm2.c
 *
 */


#include "../inc/s__v_norm2.h"


// Additional Includes
#include <math.h>


void s__v_norm2(
    float * sclRes,
    const struct vector * vOpr
  ) {
    float * v = vOpr->v;

    // Method Locals
    float scale = 0;
    float ssq = 1;
    float ax = 0.0;

    for(unsigned int I=0; I<vOpr->l; ++I) {
      ax = v[I];
      if(ax != 0) {
        ax = fabs(ax);
        if(scale < ax) {
          // Compute 2nd Power
          ssq = 1 + ssq * (scale/ax) * (scale/ax);
          scale = ax;
        } else {
          // Compute 2nd Power
          ssq += (ax/scale) * (ax/scale);
        }
      } // L10:
    }
    * sclRes = scale*sqrt(ssq);  
    return;
}


