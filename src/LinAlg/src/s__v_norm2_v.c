/*! /file s__v_norm2_v.c
 *
 *  /brief Robust Euclidean norm computation
 *
 *  Robust computation for computing the L2 (Euclidean) norm.
 *  While not impervious, this method resist Overflows and Underflows
 *
 *  C equivalent to LAPACK's SNMR2 routine
 *  Sauce: http://www.netlib.org/lapack/explore-html/d7/df1/snrm2_8f_source.html
 *
 *  notes:
 *  LAPACK's SNMR2 routine is equivalent SLASSQ
 *  
 */


#include "../inc/s__v_norm2_v.h"


void s__v_norm2_v(
    float * sclRes,
    const struct vector * vOprA,
    const struct vector * vOprB
  ) {
    float * vA = vOprA->v;
    float * vB = vOprB->v;

    // Method Locals
    float scale = 0;
    float ssq = 1;
    float ax = 0.0;

    for(unsigned int I=0; I<vOprA->l; ++I) {
      ax = vA[I] - vB[I];
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


