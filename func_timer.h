/*********************************************************************
 *
 *                  EE 4 Project - Code Template
 *
 *********************************************************************
 * Processor:       PIC18F2550
 * Compiler:        XC8 1.35+
 * Author:         Chengzhi.Deng
 * Updated:         23/03/2016
 ********************************************************************/

#ifndef _FUNC_JOYSTICK_START_
#define _FUNC_JOYSTICK_START_

/** I N C L U D E S *************************************************/
#include "config.h"

/** D E F I N E S ***************************************************/
#define JOYU_OUT        LATBbits.LATB6
#define JOYB_OUT        LATBbits.LATB5
#define JOYL_OUT        LATBbits.LATB4
#define JOYR_OUT        LATBbits.LATB3
#define JOYC_OUT        LATBbits.LATB2

/** P U B L I C   V A R I A B L E S *********************************/
// when a variable is declared 'extern' it also has to be declared in
// the corresponding .c file without the 'extern' keyword
extern unsigned int joyu_times;
extern unsigned int dif_leve;
extern unsigned int joyl_times;
extern unsigned char direction;
/** P U B L I C   P R O T O T Y P E S *******************************/
void joy_start_init(void);
void joy_start_difficulty  (joyu_times);
void joy_start_play  (joyl_times);
void joy_start_contr(void);
#endif

#endif
//EOF----------------------------------------------------------------
