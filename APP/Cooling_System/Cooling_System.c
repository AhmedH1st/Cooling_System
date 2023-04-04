#include "STD_TYPES.h"
#include "util/delay.h"
#include "PORT_Interface.h"
#include "LCD_interface.h"
#include "Timer0_interface.h"
#include "ADC_interface.h"
#include "Lm35_interface.h"
#include "DC_Motor.h"
#include "Cooling_system.h"

static u16 Temp_Reading;


void Cooling_System_Init (void)
{
	Port_Init(PORT_Config_Arr);
	H_LCD_Init();
	M_ADC_void_Init();
	M_void_Timer_Init();
	LM35_Init();

	H_LCD_Writestr("WELCOME IN Cooling");
	H_LCD_GoTOAddress_UsingLine_Col(LINE_2,DIgit_5);
	H_LCD_Writestr("SYSTEM PROJECT");
	_delay_ms(3000);
	H_LCD_ClearDisplay();
	H_LCD_Writestr("DESIGNED BY:");
	H_LCD_GoTOAddress_UsingLine_Col(LINE_2,DIgit_1);
	H_LCD_Writestr("AHMED HESHAM");
	_delay_ms(4000);
	H_LCD_ClearDisplay();
}

void Cooling_System_Runnable (void)
{
	H_LCD_ClearDisplay();
	Temp_Reading=LM35_GetRead();
	H_LCD_Writestr("Temperature : ");
	H_LCD_WriteNum(Temp_Reading/10);

	H_LCD_WriteChar('C');

	if (Temp_Reading < 250)
	{
		H_void_Motor_Stop();
		M_void_Timer_SetPhaseCorrectPWM(500,0);
	}



	else if (Temp_Reading>250 && Temp_Reading<330)
	{
		H_void_Motor_Start_Cw();
		M_void_Timer_SetPhaseCorrectPWM(500,50);
		H_LCD_GoTOAddress_UsingLine_Col(LINE_2,DIgit_1);
	}

	else if (Temp_Reading>350)
	{
		H_void_Motor_Start_Cw();
		M_void_Timer_SetPhaseCorrectPWM(500,80);
		H_LCD_GoTOAddress_UsingLine_Col(LINE_2,DIgit_1);
		H_LCD_Writestr("//Hysteresis Adjust");
		H_LCD_GoTOAddress_UsingLine_Col(LINE_3,DIgit_1);
		H_LCD_Writestr("Enabled");
	}
	_delay_ms(1000);
}
