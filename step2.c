/*
 * step.c
 *
 * Created: 9/29/2020 4:11:57 PM
 * Author: AMIR HOSSEIN PN
 */

#include <mega16.h>
#include <delay.h>

#define START  PINB.0
#define LED_red  PORTD.0
#define LED_green  PORTD.1


 void main(void)
{
 int i = 0;
PORTA = 0X00;
    DDRA=0X0F;
    PORTB=0X01;
    DDRB=0X00;
    PORTD=0X00;
    DDRD=0X03;   
    
while(1)
{
if (!START)
        {
            for( i=0; i<200; i++)
            {
                PORTD = 0x02;
                
                PORTA = 0x09;
                delay_ms(80); 
                
                PORTA = 0x0C;
                delay_ms(80);
                
                PORTA = 0x06;
                delay_ms(80);
                
                PORTA = 0x03;
                delay_ms(80);
                
            }       
            PORTA = 0x09;
            delay_ms(80);
            PORTD = 0X01;
            
            }
            
        }
}