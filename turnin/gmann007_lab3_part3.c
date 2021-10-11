/*	Author: lab
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
DDRA = 0x00; PORTA = 0xFF;
   /* DDRB = 0x00; PORTB = 0xFF;*/
    DDRC = 0xFF; PORTC = 0x00;
    unsigned char tmpA = 0x00;
    unsigned char tmpB = 0x00;
    /* Insert your solution below */
   while (1) {
	tmpA = PINA;
	tmpB = 0x00;
	if ((tmpA & 0x0F) == 0x01 || (tmpA & 0x0F) == 0x02 || (tmpA & 0x0F) == 0x31 || (tmpA & 0x0F) == 0x32) {
			tmpB = 0x60;
		}
		if ((tmpA & 0x0F) == 0x03 || (tmpA & 0x0F) == 0x04 || (tmpA & 0x0F) == 0x33 || (tmpA & 0x0F) == 0x34) {
			tmpB = 0x70; 
		}
		if ((tmpA & 0x0F) == 0x05 || (tmpA & 0x0F) == 0x06 || (tmpA & 0x0F) == 0x35 || (tmpA & 0x0F) == 0x36) {
			tmpB = 0x38;
		}
		if ((tmpA & 0x0F) == 0x07 || (tmpA & 0x0F) == 0x08 || (tmpA & 0x0F) == 0x09 || (tmpA & 0x0F) == 0x37 || (tmpA 0x0F) == 0x38 || (tmpA & 0x0F) == 0x39) {
			tmpB = 0x3C;
		}
		if ((tmpA & 0x0F) == 0x0A || (tmpA & 0x0F) == 0x0B || (tmpA & 0x0F) == 0x0C || (tmpA & 0x0F) == 0x3A || (tmpA & 0x0F) == 0x3B || (tmpA & 0x0F) == 0x3C) {
			tmpB = 0x3E;
		}
		if ((tmpA & 0x0F) == 0x0D || (tmpA & 0x0F) == 0x0E || (tmpA & 0x0F) == 0x0F || (tmpA & 0x0F) == 0x3D || (tmpA & 0x0F) == 0x3E || (tmpA & 0x0F) == 0x3F) {
			tmpA = 0x3F;
		}
			if ((tmpA & 0x70) == 0x30) {
			tmpB =  (tmpB + 0x80);
		}
		
		PORTC = tmpB;
		
		
		
	}
	
	return 0;
}
