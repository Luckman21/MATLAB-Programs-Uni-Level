/* 
 * File:   newmain2.c
 * Author: Luqmaan Irshad, 217222365, luq21
 *
 * Created on September 29, 2020, 6:24 PM
 */

#include	<xc.h>
//	my	global	variable.
int my_global = 1;

int main(void) {
    //	local	variable	for	use	in	the	main	function.
    int my_local = 0;

    //	initialize	Port	B,	Pin	5	(PB5)
    DDRB = 0b00100000; //	bit	5	of	port	B	is	an	output				
    PORTB = 0b00000000; //	bit	5	is	turned	off.

    while (1) {
        my_local = my_local + 1;

        //	Turn	on	PB5	if	my_local	is	<	5
        //	Turn	off	PB5	if	my_local	is	between	5	and	10
        //	Reset	my_local	if	over	10.
        if (my_local < 5) {
            PORTB = 0b00100000; //	bit	5	is	turned	on.
        } else if (my_local < 10) {
            PORTB = 0b00000000; //	bit	5	is	turned	off.
        } else {
            //	reset	count	on local	variable,	my_local
            my_local = 0;
            //	increment	the	count	on	the	global	variable
            my_global = my_global + 1;
        }
    }
    return 0;
}
