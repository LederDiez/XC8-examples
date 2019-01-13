/*
 * File:   main.c
 * Author: Leder Diez
 *
 * Created on January 12, 2019, 11:48 PM
 */

#define _XTAL_FREQ 4000000

#include "device_manager.h"

void main() {
    
    system_initializer();
    
    while (true) {
        LED_SetValue = !Button_Read;
    }
    return;
}
