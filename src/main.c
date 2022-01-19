/*  Author  : Fatma                          */
/*  Date    : 19 December 2021                */
/*  version : V1                             */

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "RCC_interface.h"
#include "DIO_interface.h"
#include "DAC_interface.h"
#include "STK_interface.h"



void main(void)
{
    MRCC_voidInitSysClock();                 /*chose clock system to HSE 8MHZ */
   MRCC_voidEnableClock(APB2, IOPA);        /*Enable GPIOA clock*/

   MGPIO_voidSetPinDirection(GPIOA, PIN0, OUTPUT_SPEED_2MHZ_PP);
   MGPIO_voidSetPinDirection(GPIOA, PIN1, OUTPUT_SPEED_2MHZ_PP);
   MGPIO_voidSetPinDirection(GPIOA, PIN2, OUTPUT_SPEED_2MHZ_PP);
   MGPIO_voidSetPinDirection(GPIOA, PIN3, OUTPUT_SPEED_2MHZ_PP);
   MGPIO_voidSetPinDirection(GPIOA, PIN4, OUTPUT_SPEED_2MHZ_PP);
   MGPIO_voidSetPinDirection(GPIOA, PIN5, OUTPUT_SPEED_2MHZ_PP);
   MGPIO_voidSetPinDirection(GPIOA, PIN6, OUTPUT_SPEED_2MHZ_PP);
   MGPIO_voidSetPinDirection(GPIOA, PIN7, OUTPUT_SPEED_2MHZ_PP);


   MSTK_voidInit();
   /* assume 1 sample = 1 byte that main 1sec from human voice take 8kbyte so i need to put data on DAC each 125us */
   MSTK_voidSetIntervalPeriodic( 125, voidSetDAC);

   while(1);
}
