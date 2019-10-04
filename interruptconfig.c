/*
 * File:   interruptconfig.c
 * Author: fatma
 *
 * Created on 24 Eylül 2019 Sal?, 13:41
 */

#include "interruptconfig.h"
#include <xc.h>

void  ei_ex_ris(void) {
 //DATASHEETE GÖRE BULDU?UM AKT?F ED?LECEK ?NTERRUPTLARI AKT?F ETT?K
    INTCONbits.GIE = 1;
    INTCONbits.INTE = 1;               //INF internel flag
    OPTION_REGbits.INTEDG = 1;    //YÜKSELEN KENAR
}

void ei_ex_fal(void) {
 //DATASHEETE GÖRE BULDU?UM AKT?F ED?LECEK ?NTERRUPTLARI AKT?F ETT?K
    INTCONbits.GIE = 1;
    INTCONbits.INTE = 1;               //INF internel flag
    OPTION_REGbits.INTEDG = 0;    //YÜKSELEN KENAR
}

void ei_portb(void){
    INTCONbits.GIE=1;
    INTCONbits.RBIE=1;
}