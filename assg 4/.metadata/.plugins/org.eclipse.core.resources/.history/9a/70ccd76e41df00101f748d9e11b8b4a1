/*
 * my_switch.c
 *
 *  Created on: Dec 17, 2025
 *      Author: kiran_z6dopa8
 */

#include"stm32f407xx.h"
#include"my_switch.h"


void switch_init(void)
{
	//0. enable clock for GPIOA in AHB1
	RCC->AHB1ENR |= (1<<0);
	//1. select mode as Input
	GPIOA->MODER &= ~(3<<(O*2));



}
int switch_read(void)


	{
		return (GPIOA->IDR &(1<<0)) ; // switch is press
	}



