//=====[Libraries]=======================================================/*======

/*#include "smart_home_system.h"*/
//#include "user_interface.h"
#include "mbed.h"
#include "arm_book_lib.h"
#include "display.h"

//=====[Main function, the program entry point after power on or reset]========

int main()
{
    /*smartHomeSystemInit();*/
   // while (true) {
displayInit( DISPLAY_CONNECTION_I2C_PCF8574_IO_EXPANDER );
    displayCharPositionWrite ( 0,0);
    displayStringWrite("Taller de Sist. ");
    displayCharPositionWrite ( 3,1);
    displayStringWrite("Embebidos");

       /* smartHomeSystemUpdate();*/
   // }
}