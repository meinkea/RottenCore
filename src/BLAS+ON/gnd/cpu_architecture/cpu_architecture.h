/*! /file cpu_architecture.h
 *
 */


#ifndef BLASxOFF__CPU_ARCHITECTURE_H
 #define BLASxOFF__CPU_ARCHITECTURE_H


  #ifdef ESP32
    #include "arch_types/arch_type__esp32.h"

  #elif AVR
    #include "arch_types/arch_type__avr.h"

  #else
    #include "arch_types/arch_type__default.h"
  #endif


#endif // BLASxOFF__CPU_ARCHITECTURE_H


