/*
 * File:   keypad.c
 * Author: fatma
 *
 * Created on 04 Ekim 2019 Cuma, 12:46
 */

#include "keypad.h"
#include "configBit.h"


unsigned char get_keypad() {
    
    unsigned char k;
    
    
    COLUMN1=HIGH; //SUTUN1 E VOLTAJ VER.
    if(ROW1==HIGH) __delay_ms(WAIT),k=1;
    if(ROW2==HIGH) __delay_ms(WAIT),k=4;
    if(ROW3==HIGH) __delay_ms(WAIT),k=7;
    if(ROW4==HIGH) __delay_ms(WAIT),k=15;
    COLUMN1=LOW; 
    
    COLUMN2=HIGH; //SUTUN1 E VOLTAJ VER.
    if(ROW1==HIGH) __delay_ms(WAIT),k=2;
    if(ROW2==HIGH) __delay_ms(WAIT),k=5;
    if(ROW3==HIGH) __delay_ms(WAIT),k=8;
    if(ROW4==HIGH) __delay_ms(WAIT),k=0x00;
    COLUMN2=LOW; 
    
    COLUMN3=HIGH; //SUTUN1 E VOLTAJ VER.
    if(ROW1==HIGH) __delay_ms(WAIT),k=3;
    if(ROW2==HIGH) __delay_ms(WAIT),k=6;
    if(ROW3==HIGH) __delay_ms(WAIT),k=9;
    if(ROW4==HIGH) __delay_ms(WAIT),k=255;
    COLUMN3=LOW; 
    
    return k;
}
