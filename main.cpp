//=====[Libraries]=======================================================/*======


//#include "mbed.h"
//#include "arm_book_lib.h"
#include "display.h"

//=====[Main function, the program entry point after power on or reset]========

int main()
    {
    displayInit(DISPLAY_CONNECTION_I2C_PCF8574_IO_EXPANDER);
    displayCharPositionWrite ( 0,0);
    displayStringWrite("Taller de Sist. ");
    displayCharPositionWrite ( 3,1);
    displayStringWrite("Embebidos");
    }