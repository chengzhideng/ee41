
/*********************************************************************
 *
 *                  EE 4 Project - Code Template
 *
 *********************************************************************
 * Processor:       PIC18F2550
 * Compiler:        XC8 1.35+
 * Author:          Chengzhi.Deng
 * Updated:         23/03/2019
 ********************************************************************/

/** I N C L U D E S *************************************************/
#include "func_band_speed.h"

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
 * Overview:        Initializes band speed
 ********************************************************************/

void band_speed_init(void) {
	LEVE1 = 0;
    LEVE2 = 0;
    LEVE3 = 0;
    LEVE4 = 0;
    LEVE5 = 0
  
}

/********************************************************************
 * Function:        void band_speed_level  (dif_leve)
 * PreCondition:    None
 * Input:           None
 * Output:          None
 * Overview:        To chose the speed of the band;
 ********************************************************************/
void band_speed_level  (dif_leve){
 switch(dif_leve)
    {
        case 1:
            LEVE1 = 1;
            break;
        case 2:
            LEVE2 = 1
            break;
        case 3:
            LEVE3 = 1;
            break;
        case 4:
            LEVE4 = 1;
            break;
        case 5:
            LEVE5 = 1;
            break;
        default:
            LEVE1 = LEVE2 = LEVE3 = LEVE4 = LEVE5 = 0;
    }
 
 





}
 
