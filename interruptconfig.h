/* 
 * File:   interruptconfig.h
 * Author: fatma
 *
 * Created on 24 Eylül 2019 Sal?, 13:40
 */

#ifndef INTERRUPTCONFIG_H
#define	INTERRUPTCONFIG_H

void ei_ex_ris(void);//enable externel edge of rising

void ei_ex_fal(void);//enable externel edge of falling

void ei_portb(void);  //enable portb(RB4,RB5,RB6,RB7 change on) interrupt

#endif	/* INTERRUPTCONFIG_H */

