/*********************************************************************
 *
 *                  EE 4 Project - Code Template
 *
 *********************************************************************
 * Processor:       PIC18F2550
 * Compiler:        XC8 1.35+
 * Author:         Chengzhi.Deng
 * Updated:         11/04/2016
 ********************************************************************/

#ifndef _FUNC_BAND_SPEED_
#define _FUNC_BAND_SPEED

/** I N C L U D E S *************************************************/
#include "config.h"

/** D E F I N E S ***************************************************/
#define LEVE1        LATBbits.LATB6
#define LEVE2        LATBbits.LATB5
#define LEVE3        LATBbits.LATB4
#define LEVE4        LATBbits.LATB3
#define LEVE5        LATBbits.LATB2
/** P U B L I C   V A R I A B L E S *********************************/
// when a variable is declared 'extern' it also has to be declared in
// the corresponding .c file without the 'extern' keyword
extern unsigned int dif_leve=0;
extern unsigned int speed=0;
/** P U B L I C   P R O T O T Y P E S *******************************/
void band_speed_init(void);
void band_speed_level  (dif_leve);
#endif

#endif
//EOF----------------------------------------------------------------
