#include <STM32f4xx.h>
#include "stdio.h"
#include "pines.h"
pines p;

int x;

int delay(int t)
{
	for (int i=0;i<t;i++);
}

int main(void)
{
	p.port('A',0,0,0,0,0);
	p.port('E',12,1,0,0,3);
	p.port('D',13,1,0,0,0);
	p.port('D',14,1,0,0,0);
	p.port('D',15,1,0,0,0);
	
	while(1)
	{
		x=GPIOA->IDR;
		x=x&0x1;
		if (x==1)
		{
			GPIOD->ODR&=0x0;
			delay(0xAAAAAA);
			GPIOD->ODR=0x1000;
			delay(0xAAAAAA);
			GPIOD->ODR&=0x0;
			delay(0xAAAAAA);
			GPIOD->ODR=0X2000;
			delay(0xAAAAAA);
			GPIOD->ODR&=0x0;
			delay(0xAAAAAA);
			GPIOD->ODR=0x4000;
			delay(0xAAAAAA);
			GPIOD->ODR&=0x0;
			delay(0xAAAAAA);
			GPIOD->ODR=0X8000;
			delay(0xAAAAAA);
		}
		else	
		{
			GPIOD->ODR&=0x0;
			delay(0xAAAAAA);
			GPIOD->ODR=0xF000;
			delay(0xAAAAAA);
			GPIOD->ODR&=0x0;
			delay(0xAAAAAA);
			GPIOD->ODR=0XE000;
			delay(0xAAAAAA);
			GPIOD->ODR&=0x0;
			delay(0xAAAAAA);
			GPIOD->ODR=0xD000;
			delay(0xAAAAAA);
			GPIOD->ODR&=0x0;
			delay(0xAAAAAA);
			GPIOD->ODR=0XC000;
			delay(0xAAAAAA);
		}
	}
	
}