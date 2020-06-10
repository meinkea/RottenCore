/*! /file common.h
 *
 *  /brief Things that are used by both matrix and vector initialization functions
 *
 */


#ifndef BLAS_MEMORY_COMMON_H
  #define BLAS_MEMORY_COMMON_H


  // -- CPU Architecture
  #include "../../cpu_architecture/cpu_architecture.h"


  #include <stddef.h> // ~/.arduino15/packages/esp32/tools/xtensa-esp32-elf-gcc/1.22.0-80-g6c4433a-5.2.0/lib/gcc/xtensa-esp32-elf/5.2.0/include/stddef.h
  #include <stdlib.h> 
  #include <stdint.h>


  #include "memory_limits.h"
  #include "../../flags/inc/BLAS_flags.h"
  #include "../../lvlZ/inc/array_zero.h"
  #include "../../error/BLAS_error_codes.h"


#endif // BLAS_MEMORY_COMMON_H


