/*! Arduino Header file that flattens the includes
 *
 *  Arduino doesn't preform searches down beneath the main library directory unless told to0.
 *  So this header file does just that.
 *
 */


//  /* If we're not using GNU C, elide __attribute__ */
//  #ifndef __GNUC__
//  #  define  __attribute__(x)  /*NOTHING*/
//  #endif


#ifndef ROTTENCORE_H
  #define ROTTENCORE_H


  #include "BLAS+ON/BLAS+ON.h"
  #include "LinAlg/LinAlg.h"


#endif // ROTTENCORE_H


