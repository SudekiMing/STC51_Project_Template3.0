#ifndef __LED_H
#define __LED_H

#include "includes.h"

sbit LED0 = P1^0;
sbit LED1 = P1^1;
sbit LED2 = P1^2;
sbit LED3 = P1^3;
sbit LED4 = P1^4;
sbit LED5 = P1^5;
sbit LED6 = P1^6;
sbit LED7 = P1^7;

#define ON  0
#define OFF 1

/*
LED灯I/O口按位取反宏定义，方便使用
*/
#define LED0_TOGGLE	 LED0 = ~ LED0
#define LED1_TOGGLE	 LED1 = ~ LED1
#define LED2_TOGGLE	 LED2 = ~ LED2
#define LED3_TOGGLE	 LED3 = ~ LED3
#define LED4_TOGGLE	 LED4 = ~ LED4
#define LED5_TOGGLE	 LED5 = ~ LED5
#define LED6_TOGGLE	 LED6 = ~ LED6
#define LED7_TOGGLE	 LED7 = ~ LED7


void LED_FLASH(void);


#endif /*__LED_H*/
