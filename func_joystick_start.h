
/*********************************************************************
 *
 *                  EE 4 Project - Code Template
 *
 *********************************************************************
 * Processor:       PIC18F2550
 * Compiler:        XC8 1.35+
 * Author:      Chengzhi.deng
 * Updated:         23/03/2019
 ********************************************************************/

/** I N C L U D E S *************************************************/
#include "func_joystick_start.h"

/** P U B L I C   V A R I A B L E S *********************************/
// in order for the variable to be used in other file, it also has to
// be declared as 'extern' in the corresponding .h file
extern unsigned int speed=0;
extern unsigned int dif_leve=0;
extern unsigned int joyl_times=0;
extern unsigned char direction='S';
/** P R I V A T E   V A R I A B L E S *******************************/
// 'static' implies that the variable can only be used in this file
// (cfr. 'private' in Java)

/** P R I V A T E   P R O T O T Y P E S *****************************/
// 'static' implies that the function can only be used in this file
// (cfr. 'private' in Java)


/********************************************************************/
/** P U B L I C   D E C L A R A T I O N S ***************************/
/********************************************************************
 * Function:        void joy_start_init(void)
 * PreCondition:    None
 * Input:           None
 * Output:          None
 * Overview:        Initializes joystick value.
 ********************************************************************/

void joy_start_init(void) {
	TRISBbits.TRISB6 = 0;
    TRISBbits.TRISB5 = 0;
    TRISBbits.TRISB4 = 0;
    TRISBbits.TRISB3 = 0;
    TRISBbits.TRISB2 = 0;
}

/********************************************************************
 * Function:        void joy_start_difficulty  (joyu_times);
 * PreCondition:    None
 * Input:           None
 * Output:          None
 * Overview:       Select difficulty with joystick, displayed in LEDs from 1 to 5 difficulty
 ********************************************************************/

 int joy_start_difficulty  (joyu_times);
{ 
     int dif_leve=0;
     if(joyu_times<=5)
     {
     dif_leve=joyu_times;   
     }
     else
         { dif_leve=joyu_times-5; }
     
     return dif_leve;
    }
 
 
 
  /********************************************************************
 * Function:       void joy_start_play  (joyl_times)
 * PreCondition:    None
 * Input:           None
 * Output:          None
 * Overview:      Start the game and control the car;
 ********************************************************************/
int  joy_start_contr(direction);
{
switch(direction)
    {
    case 'U':
            JOYU_OUT = 1; JOYB_OUT = JOYL_OUT = JOYR_OUT = JOYC_OUT = 0;
            break;
        case 'B':
            JOYB_OUT = 1; JOYU_OUT = JOYL_OUT = JOYR_OUT = JOYC_OUT = 0;
            break;
        case 'L':
            JOYL_OUT = 1; JOYU_OUT = JOYB_OUT = JOYR_OUT = JOYC_OUT = 0;
            break;
        case 'R':
            JOYR_OUT = 1; JOYU_OUT = JOYB_OUT = JOYL_OUT = JOYC_OUT = 0;
            break;
        case 'S':
            JOYU_OUT = JOYB_OUT = JOYL_OUT = JOYR_OUT = JOYC_OUT = 0;
            break;
        default:
            JOYU_OUT = JOYB_OUT = JOYL_OUT = JOYR_OUT = JOYC_OUT = 0;
    }




}
 
 
 /********************************************************************
 * Function:       void joy_start_play  (joyl_times)
 * PreCondition:    None
 * Input:           None
 * Output:          None
 * Overview:       Initialize the game, select difficulty and start the game
 ********************************************************************/
 void joy_start_play  (joyl_times){
 switch(joyl_times)
    {
        case 0:
            joy_start_init(void);
            break;
        case 1:
           joy_start_difficulty  (joyu_times);
            break;
        case 2:
            joy_start_contr(direction);
        default:
            joy_start_contr(direction);
    }
 
}
}
/********************************************************************/
/** P R I V A T E   D E C L A R A T I O N S *************************/
/********************************************************************
#endif
//EOF-----------------------------------------------------------------
