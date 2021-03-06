/*
***************************************************************************************************
* Project:  I2C Master Bit Bang Driver
* Filename: main.c
*
* Created: 01.05.2017
* Author:  M. Schuepbach
*
* Description: This is a test program for the I2C Master Bit Bang Driver.
*              Tested with ATtiny841, RTC DS1307 and EEPROM AT24C32.
*              Have a look at the Main loop for an example.
*
***************************************************************************************************
*/

#include "main.h"
#include "I2C_Master_Bit_Bang_Driver.h"


/*
***************************************************************************************************
**                                  GLOBAL VARIABLES AND ARRAYS
***************************************************************************************************
*/
// Initialize global variables or arrays here


/*
***************************************************************************************************
**                                              MAIN
***************************************************************************************************
*/
int main(void)
{
    /* Local variables */
    volatile unsigned char test1 = 0;    /* for debugging */
    volatile unsigned char test2 = 0;    /* for debugging */
    volatile bool result1 = 0;           /* for debugging */
    volatile bool result2 = 0;           /* for debugging */
    
    /* Initializations */
    ATtiny841_board_init();
    I2C_init();
    
    
    /* Main loop */
    while(1)
    {
        result1 = I2C_write(RTC_DS1307_ADDRESS, 0x08, 0x55);     /* for debugging */
        _delay_ms(1);
        test1 = I2C_read(RTC_DS1307_ADDRESS, 0x08);              /* for debugging, returns 0x55 if successful */
        
        _delay_ms(5);
        
        result2 = I2C_write_16bit_addr(EEPROM_AT24C32_ADDRESS, 0x00, 0x00, 0xAA);     /* for debugging */
        _delay_ms(1);
        test2 = I2C_read_16bit_addr(EEPROM_AT24C32_ADDRESS, 0x00, 0x00);              /* for debugging, returns 0xAA if successful */
        
        _delay_ms(10);
        
    } /* while(1) */
} /* Main */


/*
***************************************************************************************************
* Function: ATtiny841_board_init
* ------------------------------
*   Initializes the ports of the ATtiny841-board
*
***************************************************************************************************
*/
void ATtiny841_board_init(void)
{
    /* 0 -> input | 1 -> output */
    
    /* Bit:  76543210 */
    DDRA = 0b11111111;
    DDRB = 0b11111111;
    
    PORTA = 0b00000000;
    PORTB = 0b00000000;
}
