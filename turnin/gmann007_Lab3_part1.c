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
    unsigned char tmpC = 0x00;
    unsigned char tmpD = 0x00;
    int i = 0
    /* Insert your solution below */
   while (1) {
	tmpA = PINA;
	tmpB = PINB;
	tmpD = 0x00;
	for (i = 0;i < 8; ++i){
if ((tmpA & 0x01) == 0x01) {
		tmpD = tmpD + 1;
	}
	if ((tmpB & 0x01) == 0x01) {
		tmpD = tmpD + 1;
	}
	tmpA = tmpA >> 1;
	tmpB = tmpB >> 1;
	}
tmpC = tmpD;
	PORTC = tmpC;

	
    }





    return 0;
}
