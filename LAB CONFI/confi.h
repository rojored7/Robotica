#include <stdio.h>
#include "stm32f4xx.h"

int PORT, PIN, MODE, TYPE, SPEED, PUD;

int confP (){
if (PORT == 0){
	RCC->AHB1ENR = (1UL<<0);	
}
else{}	

if (PORT == 1){
	RCC->AHB1ENR = (1UL<<1);
}
else{}
	
if (PORT == 2){
	RCC->AHB1ENR = (1UL<<2);
}
else{}	

if (PORT == 3){
	RCC->AHB1ENR = (1UL<<3);
}
else{}

if (PORT == 4){
	RCC->AHB1ENR = (1UL<<4);
}
else{}	

if (PORT == 5){
	RCC->AHB1ENR = (1UL<<5);
}
else{}
	
if (PORT == 6){
	RCC->AHB1ENR = (1UL<<6);
}
else{}	

if (PORT == 7){
	RCC->AHB1ENR = (1UL<<7);
}
else{}	
	
	if (PORT == 8){
	RCC->AHB1ENR = (1UL<<8);
}
else{}
	
}









int modA(){
	if (PORT == 0 && MODE == 0x00){
		GPIOA->MODER=(00UL<<PIN);
	}
	else{}
		
	if (PORT == 0 && MODE == 0x01){
		GPIOA->MODER= (01UL<<PIN);
	}
	else{}
	
	if (PORT == 0 && MODE == 0x00){
		GPIOA->MODER=(10UL<<PIN);
	}
	else{}
	
	if (PORT == 0 && MODE == 0x00){
		GPIOA->MODER=(11UL<<PIN);
	}
	else{}
}


int modB(){
	if (PORT == 1 && MODE == 0x00){
		GPIOB->MODER=(00UL<<PIN);
	}
	else{}
		
	if (PORT == 1 && MODE == 0x01){
		GPIOB->MODER= (01UL<<PIN);
	}
	else{}
	
	if (PORT == 1 && MODE == 0x00){
		GPIOB->MODER=(10UL<<PIN);
	}
	else{}
	
	if (PORT == 1 && MODE == 0x00){
		GPIOB->MODER=(11UL<<PIN);
	}
	else{}
}


int modC(){
	if (PORT == 2 && MODE == 0x00){
		GPIOC->MODER=(00UL<<PIN);
	}
	else{}
		
	if (PORT == 2 && MODE == 0x01){
		GPIOC->MODER= (01UL<<PIN);
	}
	else{}
	
	if (PORT == 2 && MODE == 0x00){
		GPIOC->MODER=(10UL<<PIN);
	}
	else{}
	
	if (PORT == 2 && MODE == 0x00){
		GPIOC->MODER=(11UL<<PIN);
	}
	else{}
}


int modD(){
	if (PORT == 3 && MODE == 0x00){
		GPIOD->MODER=(00UL<<PIN);
	}
	else{}
		
	if (PORT == 3 && MODE == 0x01){
		GPIOD->MODER= (01UL<<PIN);
	}
	else{}
	
	if (PORT == 3 && MODE == 0x00){
		GPIOD->MODER=(10UL<<PIN);
	}
	else{}
	
	if (PORT == 3 && MODE == 0x00){
		GPIOD->MODER=(11UL<<PIN);
	}
	else{}
}



int modE(){
	if (PORT == 4 && MODE == 0x00){
		GPIOE->MODER=(00UL<<PIN);
	}
	else{}
		
	if (PORT == 4 && MODE == 0x01){
		GPIOE->MODER= (01UL<<PIN);
	}
	else{}
	
	if (PORT == 4 && MODE == 0x00){
		GPIOE->MODER=(10UL<<PIN);
	}
	else{}
	
	if (PORT == 4 && MODE == 0x00){
		GPIOE->MODER=(11UL<<PIN);
	}
	else{}
}


int modF(){
	if (PORT == 5 && MODE == 0x00){
		GPIOF->MODER=(00UL<<PIN);
	}
	else{}
		
	if (PORT == 5 && MODE == 0x01){
		GPIOF->MODER= (01UL<<PIN);
	}
	else{}
	
	if (PORT == 5 && MODE == 0x00){
		GPIOF->MODER=(10UL<<PIN);
	}
	else{}
	
	if (PORT == 5 && MODE == 0x00){
		GPIOF->MODER=(11UL<<PIN);
	}
	else{}
}


int modG(){
	if (PORT == 6 && MODE == 0x00){
		GPIOG->MODER=(00UL<<PIN);
	}
	else{}
		
	if (PORT == 6 && MODE == 0x01){
		GPIOG->MODER= (01UL<<PIN);
	}
	else{}
	
	if (PORT == 6 && MODE == 0x00){
		GPIOG->MODER=(10UL<<PIN);
	}
	else{}
	
	if (PORT == 6 && MODE == 0x00){
		GPIOG->MODER=(11UL<<PIN);
	}
	else{}
}


int modH(){
	if (PORT == 7 && MODE == 0x00){
		GPIOH->MODER=(00UL<<PIN);
	}
	else{}
		
	if (PORT == 7 && MODE == 0x01){
		GPIOH->MODER= (01UL<<PIN);
	}
	else{}
	
	if (PORT == 7 && MODE == 0x00){
		GPIOH->MODER=(10UL<<PIN);
	}
	else{}
	
	if (PORT == 7 && MODE == 0x00){
		GPIOH->MODER=(11UL<<PIN);
	}
	else{}
}

int modI(){
	if (PORT == 8 && MODE == 0x00){
		GPIOI->MODER=(00UL<<PIN);
	}
	else{}
		
	if (PORT == 8 && MODE == 0x01){
		GPIOI->MODER= (01UL<<PIN);
	}
	else{}
	
	if (PORT == 8 && MODE == 0x00){
		GPIOI->MODER=(10UL<<PIN);
	}
	else{}
	
	if (PORT == 8 && MODE == 0x00){
		GPIOI->MODER=(11UL<<PIN);
	}
	else{}
}



int typA(){
			if (PORT == 0 && TYPE	== 0x0){
		GPIOA->OTYPER=(0UL<<PIN);
	}
	else{}
		
	if (PORT == 0 && TYPE == 0x1){
		GPIOA->OTYPER= (1UL<<PIN);
	}
	else{}	
}

int typB(){
			if (PORT == 1 && TYPE	== 0x0){
		GPIOB->OTYPER=(0UL<<PIN);
	}
	else{}
		
	if (PORT == 1 && TYPE == 0x1){
		GPIOB->OTYPER= (1UL<<PIN);
	}
	else{}	
}


int typC(){
			if (PORT == 2 && TYPE	== 0x0){
		GPIOC->OTYPER=(0UL<<PIN);
	}
	else{}
		
	if (PORT == 2 && TYPE == 0x1){
		GPIOC->OTYPER= (1UL<<PIN);
	}
	else{}	
}
int typD(){
			if (PORT == 3 && TYPE	== 0x0){
		GPIOD->OTYPER=(0UL<<PIN);
	}
	else{}
		
	if (PORT == 3 && TYPE == 0x1){
		GPIOD->OTYPER= (1UL<<PIN);
	}
	else{}	
}

int typE(){
			if (PORT == 4 && TYPE	== 0x0){
		GPIOE->OTYPER=(0UL<<PIN);
	}
	else{}
		
	if (PORT == 4 && TYPE == 0x1){
		GPIOE->OTYPER= (1UL<<PIN);
	}
	else{}	
}

int typF(){
			if (PORT == 5 && TYPE	== 0x0){
		GPIOF->OTYPER=(0UL<<PIN);
	}
	else{}
		
	if (PORT == 5 && TYPE == 0x1){
		GPIOF->OTYPER= (1UL<<PIN);
	}
	else{}	
}

int typG(){
			if (PORT == 6 && TYPE	== 0x0){
		GPIOG->OTYPER=(0UL<<PIN);
	}
	else{}
		
	if (PORT == 6 && TYPE == 0x1){
		GPIOG->OTYPER= (1UL<<PIN);
	}
	else{}	
}


int typH(){
			if (PORT == 7 && TYPE	== 0x0){
		GPIOH->OTYPER=(0UL<<PIN);
	}
	else{}
		
	if (PORT == 7 && TYPE == 0x1){
		GPIOH->OTYPER= (1UL<<PIN);
	}
	else{}	
}

int typI(){
			if (PORT == 8 && TYPE	== 0x0){
		GPIOI->OTYPER=(0UL<<PIN);
	}
	else{}
		
	if (PORT == 8 && TYPE == 0x1){
		GPIOI->OTYPER= (1UL<<PIN);
	}
	else{}	
}





int speA(){
	if (PORT == 0 && SPEED == 0x00){
		GPIOA->OSPEEDR=(00UL<<PIN);
	}
	else{}
		
	if (PORT == 0 && SPEED == 0x01){
		GPIOA->OSPEEDR= (01UL<<PIN);
	}
	else{}
	
	if (PORT == 0 && SPEED == 0x00){
		GPIOA->OSPEEDR=(10UL<<PIN);
	}
	else{}
	
	if (PORT == 0 && SPEED == 0x00){
		GPIOA->OSPEEDR=(11UL<<PIN);
	}
	else{}
}


int speB(){
	if (PORT == 1 && SPEED == 0x00){
		GPIOB->OSPEEDR=(00UL<<PIN);
	}
	else{}
		
	if (PORT == 1 && SPEED == 0x01){
		GPIOB->OSPEEDR= (01UL<<PIN);
	}
	else{}
	
	if (PORT == 1 && SPEED == 0x00){
		GPIOB->OSPEEDR=(10UL<<PIN);
	}
	else{}
	
	if (PORT == 1 && SPEED == 0x00){
		GPIOB->OSPEEDR=(11UL<<PIN);
	}
	else{}
}


int speC(){
	if (PORT == 2 && SPEED == 0x00){
		GPIOC->OSPEEDR=(00UL<<PIN);
	}
	else{}
		
	if (PORT == 2 && SPEED == 0x01){
		GPIOC->OSPEEDR= (01UL<<PIN);
	}
	else{}
	
	if (PORT == 2 && SPEED == 0x00){
		GPIOC->OSPEEDR=(10UL<<PIN);
	}
	else{}
	
	if (PORT == 2 && SPEED == 0x00){
		GPIOC->OSPEEDR=(11UL<<PIN);
	}
	else{}
}


int speD(){
	if (PORT == 3 && SPEED == 0x00){
		GPIOD->OSPEEDR=(00UL<<PIN);
	}
	else{}
		
	if (PORT == 3 && SPEED == 0x01){
		GPIOD->OSPEEDR= (01UL<<PIN);
	}
	else{}
	
	if (PORT == 3 && SPEED == 0x00){
		GPIOD->OSPEEDR=(10UL<<PIN);
	}
	else{}
	
	if (PORT == 3 && SPEED == 0x00){
		GPIOD->OSPEEDR=(11UL<<PIN);
	}
	else{}
}



int speE(){
	if (PORT == 4 && SPEED == 0x00){
		GPIOE->OSPEEDR=(00UL<<PIN);
	}
	else{}
		
	if (PORT == 4 && SPEED == 0x01){
		GPIOE->OSPEEDR= (01UL<<PIN);
	}
	else{}
	
	if (PORT == 4 && SPEED == 0x00){
		GPIOE->OSPEEDR=(10UL<<PIN);
	}
	else{}
	
	if (PORT == 4 && SPEED == 0x00){
		GPIOE->OSPEEDR=(11UL<<PIN);
	}
	else{}
}


int speF(){
	if (PORT == 5 && SPEED == 0x00){
		GPIOF->OSPEEDR=(00UL<<PIN);
	}
	else{}
		
	if (PORT == 5 && SPEED == 0x01){
		GPIOF->OSPEEDR= (01UL<<PIN);
	}
	else{}
	
	if (PORT == 5 && SPEED == 0x00){
		GPIOF->OSPEEDR=(10UL<<PIN);
	}
	else{}
	
	if (PORT == 5 && SPEED == 0x00){
		GPIOF->OSPEEDR=(11UL<<PIN);
	}
	else{}
}


int speG(){
	if (PORT == 6 && SPEED == 0x00){
		GPIOG->OSPEEDR=(00UL<<PIN);
	}
	else{}
		
	if (PORT == 6 && SPEED == 0x01){
		GPIOG->OSPEEDR= (01UL<<PIN);
	}
	else{}
	
	if (PORT == 6 && SPEED == 0x00){
		GPIOG->OSPEEDR=(10UL<<PIN);
	}
	else{}
	
	if (PORT == 6 && SPEED == 0x00){
		GPIOG->OSPEEDR=(11UL<<PIN);
	}
	else{}
}


int speH(){
	if (PORT == 7 && SPEED == 0x00){
		GPIOH->OSPEEDR=(00UL<<PIN);
	}
	else{}
		
	if (PORT == 7 && SPEED == 0x01){
		GPIOH->OSPEEDR= (01UL<<PIN);
	}
	else{}
	
	if (PORT == 7 && SPEED == 0x00){
		GPIOH->OSPEEDR=(10UL<<PIN);
	}
	else{}
	
	if (PORT == 7 && SPEED == 0x00){
		GPIOH->OSPEEDR=(11UL<<PIN);
	}
	else{}
}

int speI(){
	if (PORT == 8 && SPEED == 0x00){
		GPIOI->OSPEEDR=(00UL<<PIN);
	}
	else{}
		
	if (PORT == 8 && SPEED == 0x01){
		GPIOI->OSPEEDR= (01UL<<PIN);
	}
	else{}
	
	if (PORT == 8 && SPEED == 0x00){
		GPIOI->OSPEEDR=(10UL<<PIN);
	}
	else{}
	
	if (PORT == 8 && SPEED == 0x00){
		GPIOI->OSPEEDR=(11UL<<PIN);
	}
	else{}
}





int pupA(){
	if (PORT == 0 && PUD == 0x00){
		GPIOA->PUPDR=(00UL<<PIN);
	}
	else{}
		
	if (PORT == 0 && PUD == 0x01){
		GPIOA->PUPDR= (01UL<<PIN);
	}
	else{}
	
	if (PORT == 0 && PUD == 0x00){
		GPIOA->PUPDR=(10UL<<PIN);
	}
	else{}
	
	if (PORT == 0 && PUD == 0x00){
		GPIOA->PUPDR=(11UL<<PIN);
	}
	else{}
}


int pupB(){
	if (PORT == 1 && PUD == 0x00){
		GPIOB->PUPDR=(00UL<<PIN);
	}
	else{}
		
	if (PORT == 1 && PUD == 0x01){
		GPIOB->PUPDR= (01UL<<PIN);
	}
	else{}
	
	if (PORT == 1 && PUD == 0x00){
		GPIOB->PUPDR=(10UL<<PIN);
	}
	else{}
	
	if (PORT == 1 && PUD == 0x00){
		GPIOB->PUPDR=(11UL<<PIN);
	}
	else{}
}


int pupC(){
	if (PORT == 2 && PUD == 0x00){
		GPIOC->PUPDR=(00UL<<PIN);
	}
	else{}
		
	if (PORT == 2 && PUD == 0x01){
		GPIOC->PUPDR= (01UL<<PIN);
	}
	else{}
	
	if (PORT == 2 && PUD == 0x00){
		GPIOC->PUPDR=(10UL<<PIN);
	}
	else{}
	
	if (PORT == 2 && PUD == 0x00){
		GPIOC->PUPDR=(11UL<<PIN);
	}
	else{}
}


int pupD(){
	if (PORT == 3 && PUD == 0x00){
		GPIOD->PUPDR=(00UL<<PIN);
	}
	else{}
		
	if (PORT == 3 && PUD == 0x01){
		GPIOD->PUPDR= (01UL<<PIN);
	}
	else{}
	
	if (PORT == 3 && PUD == 0x00){
		GPIOD->PUPDR=(10UL<<PIN);
	}
	else{}
	
	if (PORT == 3 && PUD == 0x00){
		GPIOD->PUPDR=(11UL<<PIN);
	}
	else{}
}



int pupE(){
	if (PORT == 4 && PUD == 0x00){
		GPIOE->PUPDR=(00UL<<PIN);
	}
	else{}
		
	if (PORT == 4 && PUD == 0x01){
		GPIOE->PUPDR= (01UL<<PIN);
	}
	else{}
	
	if (PORT == 4 && PUD == 0x00){
		GPIOE->PUPDR=(10UL<<PIN);
	}
	else{}
	
	if (PORT == 4 && PUD == 0x00){
		GPIOE->PUPDR=(11UL<<PIN);
	}
	else{}
}


int pupF(){
	if (PORT == 5 && PUD == 0x00){
		GPIOF->PUPDR=(00UL<<PIN);
	}
	else{}
		
	if (PORT == 5 && PUD == 0x01){
		GPIOF->PUPDR= (01UL<<PIN);
	}
	else{}
	
	if (PORT == 5 && PUD == 0x00){
		GPIOF->PUPDR=(10UL<<PIN);
	}
	else{}
	
	if (PORT == 5 && PUD == 0x00){
		GPIOF->PUPDR=(11UL<<PIN);
	}
	else{}
}


int pupG(){
	if (PORT == 6 && PUD == 0x00){
		GPIOG->PUPDR=(00UL<<PIN);
	}
	else{}
		
	if (PORT == 6 && PUD == 0x01){
		GPIOG->PUPDR= (01UL<<PIN);
	}
	else{}
	
	if (PORT == 6 && PUD == 0x00){
		GPIOG->PUPDR=(10UL<<PIN);
	}
	else{}
	
	if (PORT == 6 && PUD == 0x00){
		GPIOG->PUPDR=(11UL<<PIN);
	}
	else{}
}


int pupH(){
	if (PORT == 7 && PUD == 0x00){
		GPIOH->PUPDR=(00UL<<PIN);
	}
	else{}
		
	if (PORT == 7 && PUD == 0x01){
		GPIOH->PUPDR= (01UL<<PIN);
	}
	else{}
	
	if (PORT == 7 && PUD == 0x00){
		GPIOH->PUPDR=(10UL<<PIN);
	}
	else{}
	
	if (PORT == 7 && PUD == 0x00){
		GPIOH->PUPDR=(11UL<<PIN);
	}
	else{}
}

int pupI(){
	if (PORT == 8 && PUD == 0x00){
		GPIOI->PUPDR=(00UL<<PIN);
	}
	else{}
		
	if (PORT == 8 && PUD == 0x01){
		GPIOI->PUPDR= (01UL<<PIN);
	}
	else{}
	
	if (PORT == 8 && PUD == 0x00){
		GPIOI->PUPDR=(10UL<<PIN);
	}
	else{}
	
	if (PORT == 8 && PUD == 0x00){
		GPIOI->PUPDR=(11UL<<PIN);
	}
	else{}
}



