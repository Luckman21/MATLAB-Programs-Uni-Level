/* 
 * File:   lab7main.c
 * Author: Luqmaan Irshad 217222365 luq21
 *
 * Created on November 3, 2020, 7:40 PM
 */

#pragma config   JTAGEN    = OFF    // JTAG Enable OFF (only use for '250)
#pragma config   FNOSC     = FRCPLL // Fast RC w PLL 8mHz internal rc Osc
#pragma config   FPLLIDIV  = DIV_10  // PLL in 8mHz/10 = 800 kHz
#pragma config   FPLLMUL   = MUL_15 // PLL mul 800 khz * 15 = 12 Mhz
#pragma config   FPLLODIV  = DIV_64  // PLL Out: 12MHz / 64 187.5 kHz
#pragma config   FPBDIV    = DIV_1  // Peripheral Bus Divisor
#pragma config   FCKSM     = CSECME // Clock Switch Enable, FSCM Enabled
#pragma config   POSCMOD   = OFF    // Primary osc disabled
#pragma config   IESO      = OFF    // Internal/external switch over
#pragma config   OSCIOFNC  = OFF    // CLKO Output Signal Active on the OSCO Pin
#pragma config   FWDTEN    = OFF    // Watchdog Timer Enable:


#include <stdio.h>
#include <stdlib.h>
#include <xc.h>

#define DELAY 80

int main() {
    
    ANSELB = 0;

    TRISB = 0xFF00;
    T1CONbits.TON = 0;
    T1CONbits.TCKPS = 0x1;
    TMR1 = 0;
    PR1 = 0xFFFF;
    T1CONbits.TON = 1;
    
    while (1){
        LATBbits.LATB3 = 0;
        TMR1 = 0;
        
        while (TMR1 < DELAY){}
        LATBbits.LATB3 = 1;
        TMR1 = 0;
        
        while (TMR1 < DELAY){}
    }
    return (EXIT_SUCCESS);
}

