/*
***************************************************************************************************
* Project:  USART
* Filename: main.h
*
* Created: 18.05.2017
* Author:  M. Schuepbach
*
* Description: This is the header file for main.c
*
***************************************************************************************************
*/


#ifndef MAIN_H_
#define MAIN_H_


/*
***************************************************************************************************
**                                         USER DEFINES
***************************************************************************************************
*/
#define F_CPU   8000000UL           /* F_osc=8MHz & CKDIV=1 -> 8MHz / 1 = 8MHz */

/* End of configuration options. Change followings only if you know what you are doing.          */
/* ********************************************************************************************* */


/*
***************************************************************************************************
**                                   SYSTEM DEFINES AND MACROS
***************************************************************************************************
*/
// Add system defines here


/*
***************************************************************************************************
**                                           INCLUDES
***************************************************************************************************
*/
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>


/*
***************************************************************************************************
**                                  GLOBAL VARIABLES AND ARRAYS
***************************************************************************************************
*/
// Add global variables or arrays here and use extern


/*
***************************************************************************************************
**                                      FUNCTION PROTOTYPES
***************************************************************************************************
*/
void ATtiny841_board_init(void);



#endif /* MAIN_H_ */