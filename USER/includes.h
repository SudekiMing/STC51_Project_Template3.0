/******************** (C) COPYRIGHT 2016 UPRE Team ***************************
 * 文件名  ：includes.h
 * 描述    ：包含一些在工程通用的宏定义，以及系统特殊寄存器的定义    
 * 实验平台：STC51单片机
 *
**********************************************************************************/

#ifndef __INCLUDES_H
#define __INCLUDES_H

#include <reg52.h>

#define uchar unsigned char
#define uint  unsigned int

sbit Buzzer = P2^3;  //蜂鸣器定义

#endif /*__INCLUDES_H*/