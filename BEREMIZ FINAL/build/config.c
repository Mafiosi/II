/*******************************************/
/*     FILE GENERATED BY iec2c             */
/* Editing this file is not recommended... */
/*******************************************/

#include "iec_std_lib.h"

#include "accessor.h"

#include "POUS.h"

// CONFIGURATION CONFIG

void RESOURCE1_init__(void);

void config_init__(void) {
  BOOL retain;
  retain = 0;
  
  RESOURCE1_init__();
}

void RESOURCE1_run__(unsigned long tick);

void config_run__(unsigned long tick) {
  RESOURCE1_run__(tick);
}
unsigned long long common_ticktime__ = 30000000ULL; /*ns*/
unsigned long greatest_tick_count__ = (unsigned long)0UL; /*tick*/
