/*
 * File:   main.c
 * Author: Phil Glazzard
 *
 * Created on 20 July 2019, 11:07
 */
/*                  16f1459
 *                  ---------
 *   +5 Volts    1 |Vdd      | 20 0 Volts
 *Player select  2 |RA5      | 19
 * Paddle up  L  3 |RA4      | 18
 *    MCLR/ RST  4 |         | 17
 *    GREEN LED  5 |RC5      | 16
 *           CE  6 |RC4      | 15
 *RST op to 5110 7 |         | 14  RC2 Paddle down L
 *           SS  8 |         | 13 
 *           SDO 9 |         | 12
 *           TX 10 |         | 11  SCK
 *                  ---------
 
 */



#include "config.h"
#include <stdio.h>
#include "main.h"
#include "config_osc.h"
#include "setup_ports.h"
#include "init_spi.h"
#include "set_usart.h"
#include "putch.h"
#include "lcd_setup.h"
#include "TMR0_setup.h"
#include "TMR1_setup.h"
#include "interrupt isr.h"
#include "lcdWrite.h"
#include "set_address.h"
#include "set_game_area.h"
#include "TMR1_setup.h"
#include "eraseBall.h"
#include "animate_rht.h"
#include "posnBall.h"
#include "paddleUp.h"

void main(void) 
{
config_osc();       // internal clock frequency = 8MHz
setup_ports();      
init_spi();
set_usart();
lcd_setup();        // configures the LCD
set_game_area();
TMR1_setup();
//TMR0_setup();
static uchar  col, row, erase, page = 0;
float x = 0.00;

        set_address(0, 3);
        //lcdWrite (paddle[0]| gameplay_area[0][page],HIGH);
        lcdWrite (paddle[0], HIGH);
        //set_address(1, 3);
       // lcdWrite (paddle[1]| gameplay_area[1][page],HIGH);
        printf("Hello World!\n");
/*for (col = 0; col < 82; col++)
    {
     erase = 0;  
     x = col;
     row = (0.0864 * x) + 8;
    animate_rht(col,row, erase); //draw the ball , erase = 0, offsetDwn = 5, offsetUp = 0;
    __delay_ms(50);
    
     if(col<80)
     erase = 1;
    animate_rht(col,row, erase);  // erase the ball
    }

for (col = 81; col >=2; col--)
{
    erase = 0;  
     x = col;
     row = (-0.0864 * x) +22;
    animate_rht(col,row, erase);
    __delay_ms(50);
    
     if(col>=2)
      erase = 1;
    animate_rht(col,row, erase); 
}*/

while(1)
    {
        //paddleUp(3);
    }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
}