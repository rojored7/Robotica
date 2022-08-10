//--------------------------------------------------------------------------------------------------------------------------------
//entrada 
//pin "numero del pin"
//in "tipo de configuracion del pin MODER(0)entrada(1)salida(2)alternante(3)analogo"
//tipper "(0)push-pull(1)open-drain"
//espeedr "(0)2MHz(1)25MHz(2)50MHz(3)100MHz"
//pull (0)No-pull,pull down(1)pull-up(2)pull-down(3)reserved
//--------------------------------------------------------------------------------------------------------------------------------
#include <stdio.h>
#include "STM32f4xx.h"
#ifndef pines_h
#define pines_h
class pines{
	private:
		char puerto;//variable a guardar el tipo del puerto
	 int16_t   in ;//(entrada (0), salida(1) , analoga(2), funcion alternante(3)),
	int pin,tipper,speed, pull;//(pin a asignar(0 to 15)),(otyper a asignar(0 to 15))
	public:
		void port (char, int,int, int, int, int);	
};
#endif
//funcion para asignar pines tarves de corrimientos
void pines::port (char puerto, int pin, int in, int tipper, int speed, int pull)
{	
	switch (puerto)
	{
		case 'A':
			RCC->AHB1ENR |= (0x1);
			GPIOA->MODER &=~(1ul<<2*pin); 
			GPIOA->MODER &=~(1ul<<((2*pin)+1));
			if (in == 0) {
			 GPIOA->MODER |=(0ul<<2*pin); 				
			}
			if (in == 1) {
			 GPIOA->MODER |=(1ul<<2*pin); 
			}
			if (in == 2) {
			 GPIOA->MODER |=(2ul<<(2*pin)); 
			}
			if (in == 3) {
			 GPIOA->MODER |=(3ul<<2*pin); 						
			}
			if(tipper==1){
				GPIOA->OTYPER |=(1UL<<pin);
			}
			else{
				GPIOA->OTYPER |=(0UL<<pin);
			}
			if (speed == 0) {
			 GPIOA->OSPEEDR |=(0ul<<2*pin); 
			 GPIOA->OSPEEDR |=(0ul<<2*(pin+1));				
			}
			if (speed == 1) {
			 GPIOA->OSPEEDR |=(1ul<<2*pin); 
			}
			if (speed == 2) {
			 GPIOA->OSPEEDR |=(2ul<<2*(pin)); 
			}
			if (speed == 3) {
			 GPIOA->OSPEEDR |=(3ul<<2*pin); 				
			}
			if (pull == 0) {
			 GPIOA->PUPDR |=(0ul<<2*pin); 		
			}
			if (pull == 1) {
			  GPIOA->PUPDR |=(1ul<<2*pin); 	
			}
			if (pull == 2) {
			 GPIOA->PUPDR |=(2ul<<2*pin); 
			}
			if (pull == 3) {
			 GPIOA->PUPDR |=(3ul<<2*pin); 
			}
		break;		
		case 'B':
			RCC->AHB1ENR |= (0x2);
			GPIOB->MODER &=~(3ul<<2*pin); 
			if (in == 0) {
			 GPIOB->MODER |=(0ul<<2*pin); 	
			}
			if (in == 1) {
			 GPIOB->MODER |=(1ul<<2*pin); 
			}
			if (in == 2) {
			 GPIOB->MODER |=(2ul<<((2*pin))); 
			}
			if (in == 3) {
			 GPIOB->MODER |=(3ul<<2*pin); 		
			}
			if(tipper==1){
				GPIOB->OTYPER |=(1UL<<pin);
			}
			else{
				GPIOB->OTYPER |=(0UL<<pin);
			}
			if (speed == 0) {
			 GPIOB->OSPEEDR |=(0ul<<2*pin); 
			}
			if (speed == 1) {
			 GPIOB->OSPEEDR |=(1ul<<2*pin); 
			}
			if (speed == 2) {
			 GPIOB->OSPEEDR |=(2ul<<2*(pin)); 
			}
			if (speed == 3) {
			 GPIOB->OSPEEDR |=(3ul<<2*pin); 		
			}
			if (pull == 0) {
			 GPIOB->PUPDR |=(0ul<<2*pin); 			
			}
			if (pull == 1) {
			  GPIOB->PUPDR |=(1ul<<2*pin); 
			}
			if (pull == 2) {
			 GPIOB->PUPDR |=(2ul<<2*pin); 
			}
			if (pull == 3) {
			 GPIOB->PUPDR |=(3ul<<2*pin); 
			}
		break;
		case 'C':
			RCC->AHB1ENR |= (0x4);
			GPIOC->MODER &=~(1ul<<2*pin); 
			GPIOC->MODER &=~(1ul<<((2*pin)+1));
			if (in == 0) {
			 GPIOC->MODER |=(0ul<<2*pin); 	
			}
			if (in == 1) {
			 GPIOC->MODER |=(1ul<<2*pin); 
			}
			if (in == 2) {
			 GPIOC->MODER |=(2ul<<((2*pin))); 
			}
			if (in == 3) {
			 GPIOC->MODER |=(3ul<<2*pin); 	
			}if(tipper==1){
				GPIOC->OTYPER |=(1UL<<pin);
			}
			else{
				GPIOC->OTYPER |=(0UL<<pin);
			}
			if (speed == 0) {
			 GPIOC->OSPEEDR |=(0ul<<2*pin); 		
			}
			if (speed == 1) {
			 GPIOC->OSPEEDR |=(1ul<<2*pin); 
			}
			if (speed == 2) {
			 GPIOC->OSPEEDR |=(2ul<<2*(pin)); 
			}
			if (speed == 3) {
			 GPIOC->OSPEEDR |=(3ul<<2*pin); 		
			}
			if (pull == 0) {
			 GPIOC->PUPDR |=(0ul<<2*pin); 	
			}
			if (pull == 1) {
			  GPIOC->PUPDR |=(1ul<<2*pin); 
			}
			if (pull == 2) {
			 GPIOC->PUPDR |=(2ul<<2*pin); 
			}
			if (pull == 3) {
			 GPIOC->PUPDR |=(3ul<<2*pin); 	
			}
		break;
		case 'D':
			RCC->AHB1ENR |= (0x8);
			GPIOD->MODER &=~(1ul<<2*pin); 
			GPIOD->MODER &=~(1ul<<((2*pin)+1));
			if (in == 0) {
			 GPIOD->MODER |=(0ul<<2*pin); 		
			}
			if (in == 1) {
			 GPIOD->MODER |=(1ul<<2*pin); 
			}
			if (in == 2) {
			 GPIOD->MODER |=(2ul<<((2*pin))); 
			}
			if (in == 3) {
			 GPIOD->MODER |=(3ul<<2*pin); 		
			}
			if(tipper==1){
				GPIOD->OTYPER |=(1UL<<pin);
			}
			else{
				GPIOD->OTYPER |=(0UL<<pin);
			}
			if (speed == 0) {
			 GPIOD->OSPEEDR |=(0ul<<2*pin); 	
			}
			if (speed == 1) {
			 GPIOD->OSPEEDR |=(1ul<<2*pin); 
			}
			if (speed == 2) {
			 GPIOD->OSPEEDR |=(2ul<<2*(pin)); 
			}
			if (speed == 3) {
			 GPIOD->OSPEEDR |=(3ul<<2*pin); 		
			}
			if (pull == 0) {
			 GPIOD->PUPDR |=(0ul<<2*pin); 	
			}
			if (pull == 1) {
			  GPIOD->PUPDR |=(1ul<<2*pin); 
			}
			if (pull == 2) {
			 GPIOD->PUPDR |=(2ul<<2*pin); 
			}
			if (pull == 3) {
			 GPIOD->PUPDR |=(3ul<<2*pin); 
			}
		break;
		case 'E':
			RCC->AHB1ENR |= (0x10);
			GPIOE->MODER &=~(1ul<<2*pin); 
			GPIOE->MODER &=~(1ul<<((2*pin)+1));
			if (in == 0) {
			 GPIOE->MODER |=(0ul<<2*pin); 	
			}
			if (in == 1) {
			 GPIOE->MODER |=(1ul<<2*pin); 
			}
			if (in == 2) {
			 GPIOE->MODER |=(2ul<<((2*pin))); 
			}
			if (in == 3) {
			 GPIOE->MODER |=(3ul<<2*pin); 
			}
			if(tipper==1){
				GPIOE->OTYPER |=(1UL<<pin);
			}
			else{
				GPIOE->OTYPER |=(0UL<<pin);
			}
			if (speed == 0) {
			 GPIOE->OSPEEDR |=(0ul<<2*pin); 	
			}
			if (speed == 1) {
			 GPIOE->OSPEEDR |=(1ul<<2*pin); 
			}
			if (speed == 2) {
			 GPIOE->OSPEEDR |=(2ul<<2*(pin)); 
			}
			if (speed == 3) {
			 GPIOE->OSPEEDR |=(3ul<<2*pin); 		
			}
			if (pull == 0) {
			 GPIOE->PUPDR |=(0ul<<2*pin); 
			}
			if (pull == 1) {
			  GPIOE->PUPDR |=(1ul<<2*pin); 
			}
			if (pull == 2) {
			 GPIOE->PUPDR |=(2ul<<2*pin); 
			}
			if (pull == 3) {
			 GPIOE->PUPDR |=(3ul<<2*pin); 	
			}
		break;
			default:
			GPIOA->MODER=0XA8000000;
		GPIOD->MODER=0X00000280;
			
	}
}
