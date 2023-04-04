#include "Bit_Math.h"
#include "Mcu_HW.h"
#include <util/delay.h>
#include "PORT_Interface.h"
#include "DIO_Interface.h"
#include "PORT_cfg.h"
#include "ADC_interface.h"
#include "Timer0_interface.h"
#include "LED_interface.h"
#include "LED_cfg.h"
#include "SSD_interface.h"
#include "PB_interface.h"
#include "PB_cfg.h"
#include "LCD_interface.h"
#include "LCD_cfg.h"
#include "Keypad_interface.h"
#include "Ex_interface.h"
#include "Ex_cfg.h"
#include "GI.h"
#include "Call_Back_functions.h"
#include "LM35_interface.h"
#include "ConfigurableD_F_proj.h"
#include "Cooling_system.h"


int main (){

	Cooling_System_Init ();

	while(1)
	{
		Cooling_System_Runnable();
	}

}
