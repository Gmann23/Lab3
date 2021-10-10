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
    DDRB = 0x00; PORTB = 0xFF;
    DDRC = 0xFF; PORTC = 0x00;
    unsigned char tmpA = 0x00;
    unsigned char tmpB = 0x00;
    /* Insert your solution below */
   while (1) {
	tmpA = PINA;
	tmpB = 0x00;
	if((tmpA == 0x01 || 0x02) {
			tmpB = 0x60; 
		}
		if (tmpA == 0x03 ||  0x04) {
			tmpB = 0x70;
		}
		if (tmpA  == 0x03 || 0x06) {
			tmpB = 0x38;
		}
		if (tmpA == 0x07 ||  0x08 ||  0x09) {
			tmpB = 0x3C;
		}
		if (tmpA == 0x0A ||  0x0B ||  0x0C) {
			tmpB = 0x3E;
		}
		if (tmpA == 0x0D || 0x0E || 0x0F) {
			tmpB = 0x3F;
		}
		
		PORTC = tmpB;


   }


    return 0;
}
