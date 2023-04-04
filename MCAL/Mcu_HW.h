/*
 * Mcu_HW.h
 *
 *  Created on: Feb 17, 2023
 *      Author: aya_enan
 */
/*****************************************************************/
/* FILE DESCRIPTION:
----------------------------------------------------------------
*  file     : Mcu_HW.h
*
*  breif    : this file contains all registers addresses
*
*****************************************************************
*/
#ifndef MCU_HW_H_
#define MCU_HW_H_
/******************************************
  INCLUDES
*******************************************/
#include "STD_TYPES.h"
/******************************************
  Global Data TYPES AND STRUCTURES
*******************************************/


/******************************************
  GLOBAL CONSTANT MACROS
*******************************************/
//-------------------DIO-------------------
//------------------ END of DIO------------


#define PORTA_REG  (*((volatile u8*)0x3B))
#define DDRA_REG  (*((volatile u8*)0x3A))
#define PINA_REG  (*((volatile u8*)0x39))

#define PORTB_REG  (*((volatile u8*)0x38))
#define DDRB_REG  (*((volatile u8*)0x37))
#define PINB_REG  (*((volatile u8*)0x36))

#define PORTC_REG  (*((volatile u8*)0x35))
#define DDRC_REG  (*((volatile u8*)0x34))
#define PINC_REG  (*((volatile u8*)0x33))

#define PORTD_REG  (*((volatile u8*)0x32))
#define DDRD_REG  (*((volatile u8*)0x31))
#define PIND_REG  (*((volatile u8*)0x30))



//-------------------EX_INTERRUPT-------------------


#define GICR         (*((volatile u8*)0x5B))//
#define MCUCR        (*((volatile u8*)0x55))//
#define MCUCSR       (*((volatile u8*)0x54))//
#define GIFR         (*((volatile u8*)0x5A))//
#define SREG         (*((volatile u8*)0x5f))//


//-------------------    ADC    -------------------



#define ADMUX     (*(volatile unsigned char*)0x27)
#define ADLAR  5
#define REFS0  6
#define REFS1  7

#define ADCSRA    (*(volatile unsigned char*)0x26)
#define ADPS0  0
#define ADPS1  1
#define ADPS2  2
#define ADIE   3
#define ADIF   4
#define ADATE  5
#define ADSC   6
#define ADEN   7

#define ADCH      (*(volatile unsigned char*)0x25)
#define ADCL      (*(volatile unsigned char*)0x24)
#define ADC       (*(volatile unsigned short*)0x24)
#define SFIOR     (*(volatile unsigned char*)0x50)




//-------------------    TIMER0    -------------------
#define OCR0      (*(volatile unsigned char*)0x5c)
#define TIMSK      (*(volatile unsigned char*)0x59)
#define TIFR      (*(volatile unsigned char*)0x58)
#define TCCR0      (*(volatile unsigned char*)0x53)
#define TCNT0      (*(volatile unsigned char*)0x52)

#define FOC0   7
#define OCIE0  1
#define TOIE0  0
#define OCF0   1
#define TOV0   0
#define WGM00  6
#define WGM01  3

//-------------------    TIMER1    -------------------








/******************************************
  GLOBAL FUNCTIONS MACROS
*******************************************/
#endif /* MCU_HW_H_ */
