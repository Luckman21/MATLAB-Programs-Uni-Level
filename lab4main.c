/* 
 * File:   lab4main.c
 * Author: dragu
 *
 * Created on October 6, 2020, 6:47 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <xc.h>
#include <avr/io.h>


int main(void)
{
    int counter = 0;
    DDRB = (1 << DDB5);
    TCCR0A |= (1 << WGM01);
    OCR0A = 0xFF;
    TCCR0B |= (1 << CS01) | (1 << CS00);

    while (1)
    {
        while ( (TIFR0 & (1 << TOV0) ) == 0)
        {
            asm("NOP");
            TIFR0 |= (1 << TOV0);
            counter+=1;
            if (counter > 200){
                PORTB ^=(1<<5);
                counter = 0;
            }
        }
    }
    return (EXIT_SUCCESS);
}


