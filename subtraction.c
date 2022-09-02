/* 
 * File:   subtraction.c
 * Author: dragu
 *
 * Created on October 20, 2020, 7:11 PM
 */

#include <stdio.h>
#include <stdlib.h>
uint8_t gRes = 0;

/*
 * 
 */
int main(void) {
    asm("LDI    r19, 0x04");
    asm("LDI    r22, 0x05");
    asm("SUB    r22, r19");
    
    asm("LDI    r17, 0x04");
    asm("LDI    r16, 0x05");
    asm("SUB    r16, r17");
    asm("STS (gRes), r16    ");
    return (EXIT_SUCCESS);
}

