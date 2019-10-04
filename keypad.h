/* 
 * File:   keypad.h
 * Author: fatma
 *
 * Created on 04 Ekim 2019 Cuma, 12:41
 */

#ifndef KEYPAD_H
#define	KEYPAD_H

#include <xc.h>
#define COLUMN1 PORTBbits.RB0
#define COLUMN2 PORTBbits.RB1
#define COLUMN3 PORTBbits.RB2
#define ROW1 PORTBbits.RB3
#define ROW2 PORTBbits.RB4
#define ROW3 PORTBbits.RB5
#define ROW4 PORTBbits.RB6

#define WAIT 20
#define HIGH 1
#define LOW 0

unsigned char get_keypad(void);


#endif	/* KEYPAD_H */

