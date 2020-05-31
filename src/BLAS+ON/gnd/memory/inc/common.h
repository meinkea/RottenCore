/*! /file common.h
 *
 *  /brief Things that are used by both matrix and vector initialization functions
 *
 */


#ifndef BLAS_MEMORY_COMMON_H
  #define BLAS_MEMORY_COMMON_H


  // esp32 header files
  #include "esp_log.h"       // https://github.com/espressif/esp-idf/blob/master/components/log/include/esp_log.h
  #include "esp_heap_caps.h" // https://github.com/espressif/esp-idf/blob/master/components/heap/include/esp_heap_caps.h
  #include "esp_attr.h"


  #include <stddef.h> // ~/.arduino15/packages/esp32/tools/xtensa-esp32-elf-gcc/1.22.0-80-g6c4433a-5.2.0/lib/gcc/xtensa-esp32-elf/5.2.0/include/stddef.h
  #include <stdlib.h> 
  #include <stdint.h>


  #include "memory_limits.h"
  #include "../../flags/inc/BLAS_flags.h"
  #include "../../lvlZ/inc/array_zero.h"
  #include "../../error/BLAS_error_codes.h"


#endif // BLAS_MEMORY_COMMON_H


