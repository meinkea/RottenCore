/*! /file m__setcolumn.c
 *
 */


#include "../inc/m__setcolumn.h"


// level 0
#include "../../lvlZ/inc/array_copy.h"


void m__setcolumn(
    struct matrix * mDst,
    const float * arraySrc,
    const unsigned int column
  ) {
    float * mD = *(mDst->m);
    const unsigned int Dc = mDst->c;
    const unsigned int Dr = mDst->r;

    for (unsigned int IDe=column, IAe=0;  IAe<Dr;  IDe+=Dc, IAe+=1) {
      mD[IDe] = arraySrc[IAe];
    }

    return;
}


