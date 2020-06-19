/*! \file 1lvl_test_arrays.h
 *
 */


#ifndef ROTTENCORE__TEST_CASES__1LVL__1LVL_TEST_DATA_H
  #define ROTTENCORE__TEST_CASES__1LVL__1LVL_TEST_DATA_H


  #include <stddef.h>


  // -- CPU Architecture
  #include "../../../BLASxON/gnd/cpu_architecture/cpu_architecture.h"


  // -- BLAS Datatypes
  #include "../../../BLASxON/gnd/datatypes/inc/vector.h"
  // #include "../../../BLASxON/gnd/datatypes/inc/matrix.h"


  #ifdef __cplusplus
    extern "C" {
  #endif


    extern struct vector vR; extern char * svR;

    extern struct vector v0; extern char * sv0;
    extern struct vector v1; extern char * sv1;
    extern struct vector v2; extern char * sv2;
    extern struct vector v3; extern char * sv3;
    extern struct vector v4; extern char * sv4;
    extern struct vector v5; extern char * sv5;


  #ifdef __cplusplus
    }
  #endif


#endif // ROTTENCORE__TEST_CASES__1LVL__1LVL_TEST_DATA_H


