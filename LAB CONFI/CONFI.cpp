#include <stdio.h>
#include "STM32F4xx.h"
#include "confi.h"



class confi
{
	private:	

		int puerto, pin, moder, otyper, ospeedr, pupdr; 
					
			
	public:
		confi(){}
			confi (int Apuerto, int Apin, int Amoder, int Aotyper, int Aospeedr, int Apupdr){
				
				
				puerto=Apuerto;
				pin=Apin;
				moder=Amoder;
				otyper=Aotyper;
				ospeedr=Aospeedr;
				pupdr=Apupdr;
				
			}
			~confi(){}
				
};
			
		
		
int main (void){
				
					
		}
		
	
	


