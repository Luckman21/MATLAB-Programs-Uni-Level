/* 
 * File:   Lab8main.c
 * Author: Luqmaan Irshad   217222365   luq21
 *
 * Created on November 10, 2020, 7:11 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <xc.h>
 /* define which section (for example "text")
 * does this portion of code resides in. Typically,
 * all your code will reside in .text section as
 * shown below.
 */
 //.text
 /* This is important for an assembly programmer. This
 * directive tells the assembler that don't optimize
 * the order of the instructions as well as don't insert
 * 'nop' instructions after jumps and branches.
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

extern void asmFunction(int bits);
volatile unsigned int cVariable = 0;

int main(void) {
    
    ANSELB = 0x0000;
    TRISB = 0xFF00;
    LATB = 0x00FF;
    asmFunction(0x00FF);
 
    while (1) {
        
        if (cVariable == 0b1001){
            LATB = cVariable;
        }
    }
}
