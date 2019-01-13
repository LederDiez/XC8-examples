/* 
 * File:   device_manager.h
 * Author: Leder Diez
 * Comments:
 * Revision history: 
 */

// TODO Insert appropriate #include <>
    #include "device_config.h"
//

// TODO Insert declarations
    // Pin declaration
        #define LED_OUTPUT  TRISB0=0
        #define LED_HIGH    RB0=1
        #define LED_LOW     RB0=0
    //
    // Values declaration
        #define true        1
        #define false       0
    //
//

// TODO Insert declarations or function prototypes (right here) to leverage 
    void system_initializer () {
        LED_OUTPUT;
    }
//