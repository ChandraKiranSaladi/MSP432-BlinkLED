#include <stdint.h>
#include "msp.h"

#define LENGTH1 (100000)
#define LENGTH2 (10000)
/**
 * main.c
 */
void main(void)
{
    uint32_t i;
//    uint8_t *p1_out = (uint8_t*)0x40004c02;
//    uint8_t *p1_dir = (uint8_t*)0x40004c04;
	WDT_A->CTL = WDT_A_CTL_PW | WDT_A_CTL_HOLD;		// stop watchdog timer

	// Set pin as output
//	*p1_dir |= 0x01;
	P1->DIR |= BIT0;
	while(1){
//	    *p1_out ^= 0x01;
	    P1->OUT ^= BIT0;
	    for(i = LENGTH1; i>0; i--);
	}
}
