/*  Author  : fatma                          */
/*  Date    : 19 December 2021                  */
/*  version : V1                             */


#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_interface.h"

#include "DAC_interface.h"
#include "DAC_private.h"
#include "DAC_config.h"

#include "file.h"

volatile u16 i=0;

void voidSetDAC(void)
{
	MGPIO_voidSetPortValue(Data_PORT,Amaren_raw[i]);
	i++;
	if(i==39668)
	{
		i=0;
	}
}
