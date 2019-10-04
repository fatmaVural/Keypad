/* File:   main.c
 * Author: fatma
 *SORU:Timer1 birimi sayac? olarak kullan?lacakt?r.CCP1 birimi compare modunda kullan?l?p CCP1 register?ndaki de?er ile TMR1 register?ndaki deger
 * kar??la?t?rma modunda kar??la?t?r?lacakt?r. Her CCP kesmesinde led toggle edilecektir.
 */

#include <xc.h>
#include "configBit.h"
#include "interruptconfig.h"
#include "keypad.h"
 
int main(){
    
    CMCON = 0x07;
    TRISB = 0xF8;
    PORTB = 0x00;
    TRISD = 0x00;  //d portu c?k?s olarak ayarlandi
    PORTB = 0x00;
    
    PORTD=0xFF;
    
    while(1){
        PORTD =get_keypad();
    }  
}
