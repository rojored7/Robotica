#include <stdio.h>
#include "STM32F4xx.h"
#include <LCD.h>

LCD lcd; // declaracion de variable 

int main (){

	// Vector char donde guardaria el nombre que voy a mostrar en la LCD 
	Unisgned char Name[]=("Kim");
		lcd.run();
		lcd.clear(); // Se debe limpiar la LCD en caso de que tenga algo 
		lcd.cursor(1,1); // el primer numero linea sdo numero la posicion 
		lcd.write(Name);
// Para escribir lo que se quiera
	while (1)
	{
		delayms(1000);
		lcd.origen();// Mando al origen para que este vuelva a funcionar
		delayms(10);
	}
}