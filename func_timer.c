
/*********************************************************************
 *
 *                  EE 4 Project - Code Template
 *
 *********************************************************************
 * Processor:       PIC18F2550
 * Compiler:        XC8 1.35+
 * Author:          Juliana C. B. Buzanello
 * Updated:         23/03/2019
 ********************************************************************/

/** I N C L U D E S *************************************************/
#include "func_joystick_start.h"

/** P U B L I C   V A R I A B L E S *********************************/
// in order for the variable to be used in other file, it also has to
// be declared as 'extern' in the corresponding .h file
unsigned char joy_times;
extern unsigned char dif_leve;

/** P R I V A T E   V A R I A B L E S *******************************/
// 'static' implies that the variable can only be used in this file
// (cfr. 'private' in Java)

/** P R I V A T E   P R O T O T Y P E S *****************************/
// 'static' implies that the function can only be used in this file
// (cfr. 'private' in Java)


/********************************************************************/
/** P U B L I C   D E C L A R A T I O N S ***************************/
/********************************************************************
 * Function:        void led_score_init(void)
 * PreCondition:    None
 * Input:           None
 * Output:          None
 * Overview:        Initializes output channels
 ********************************************************************/

void led_score_init(void) {
	  TRISBbits.TRISB6 = 0;
    TRISBbits.TRISB5 = 0;
    TRISBbits.TRISB4 = 0;
    TRISBbits.TRISB3 = 0;
    TRISBbits.TRISB2 = 0;
}

/********************************************************************
 * Function:        void led_score_start(score_value)
 * PreCondition:    None
 * Input:           None
 * Output:          None
 * Overview:        Lights up LEDs based on current score value.
 ********************************************************************/

void led_score_start(score_value)
{
    switch(score_value)
    {
        case 0:
            LED1_OUT = 1;
            break;
        case 0:
            LED1_OUT = LED2_OUT = 1
            break;
        case 0:
            LED1_OUT = LED2_OUT = LED3_OUT = 1;
            break;
        case 0:
            LED1_OUT = LED2_OUT = LED3_OUT = LED4_OUT = 1;
            break;
        case 0:
            LED1_OUT = LED2_OUT = LED3_OUT = LED4_OUT = LED5_OUT = 1;
            break;
        default:
            LED1_OUT = LED2_OUT = LED3_OUT = LED4_OUT = LED5_OUT = 0;
    }
}
}
/********************************************************************/
/** P R I V A T E   D E C L A R A T I O N S *************************/
/********************************************************************
#endif
//EOF-----------------------------------------------------------------
