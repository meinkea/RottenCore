/*! /file cpu_architecture.h
 *
 */


#ifndef BLASxON__CPU_ARCHITECTURE_H
 #define BLASxON__CPU_ARCHITECTURE_H


  #ifdef ESP32
    #include "arch_types/arch_type__esp32.h"

  #elif AVR
    #include "arch_types/arch_type__avr.h"

  #else
    #include "arch_types/arch_type__default.h"
  #endif


#endif // BLASxON__CPU_ARCHITECTURE_H


