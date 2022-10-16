/*
 * dist_sens.c
 * description : mini_project_4
 *  Created on: Oct 10, 2022
 *      Author: Philopater ghobrial
 */
#include "lcd.h"
#include "ultra.h"
#include <avr/io.h> //to use register bits like SREG

int main(void){
	SREG |= (1<<7); // to enable interrupts in the system
	Ultrasonic_init(); //initialization of sensor and ICU
	LCD_init(); //initialization of LCD
	LCD_displayString("Distance = "); //displaying messege for user
	while(1){
		/*
		 * saving distance value in local block variable
		 * displaying the value on LCD
		 */
		uint16 distance =Ultrasonic_readDistance();
		if(distance>99){
			LCD_moveCursor(0,14);
			LCD_displayString("cm");
		}
		else if(distance>9){
			LCD_moveCursor(0,13);
			LCD_displayString("cm ");
		}
		else{
			LCD_moveCursor(0,12);
			LCD_displayString("cm ");
		}
		LCD_moveCursor(0,11);
		LCD_intgerToString(distance);
		while(distance ==Ultrasonic_readDistance());//keep checking if value changed
	}
}

