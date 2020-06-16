/*! /file BLAS_lvlZ.h
 *
 *  Wrapper for level Z header files
 *
 *  These routines operate on continous segments of memory, called arrays.
 *  Unlike vectors and matrices, arrays here are not concidered to have a dimension.
 *  So the term array is used when the dimension of the data dose not matter.
 *  These routines simply take pointer for each array they operate on and a few additional arguments.
 *  These additional operations are typicalls a start index and end index.
 *  
 *  We all point down here.  You'll point too. ;)
 *  
 *  These are aimed to have zero-overhead loop optimizations.
 *
 */


#ifndef BLASxON__BLAS_LEVELZ_H
  #define BLASxON__BLAS_LEVELZ_H


  #include "inc/array_add.h"
  #include "inc/array_ascl.h"
  #include "inc/array_asum.h"
  #include "inc/array_compare.h"
  #include "inc/array_copy.h"
  #include "inc/array_dot.h"
  #include "inc/array_dotjump.h"
  #include "inc/array_mscl.h"
  #include "inc/array_mscladd.h"
  #include "inc/array_mult.h"
  #include "inc/array_setscl.h"
  #include "inc/array_sub.h"
  #include "inc/array_swap.h"
  #include "inc/array_zero.h"

  //#include "check_dim.h"


#endif // BLASxON__BLAS_LEVEL0_H


