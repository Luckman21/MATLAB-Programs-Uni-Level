/* 
 * File:   main_megaboard.c
 * Author: Luqmaan Irshad, 217222365, luq21
 *
 * Created on September 29, 2020, 7:21 PM
 */

#include <stdint.h>
#include <stdlib.h>
#include	<xc.h>

#define DELAY_CONST (50000)
//this value produces around 1.5 seconds on the physical board ?
void delay_function(volatile int32_t);

void delay_function(volatile int32_t x){
    while(x>0){
        x = x-1.0;
    }
}

int main(void) 
{
    //	set	PB5	to	be	out
    
    DDRB = (1 << 5); //	bit	5	is	an	out.		others	set	to	0.
   
    while(1){
    
        delay_function(DELAY_CONST);
        PORTB = 0; //	all	are	off
        delay_function(DELAY_CONST);
        PORTB = (1 << 5); //	PB5	(LED)	is	on
    }
    return 0;
}
