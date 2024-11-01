//=====[Libraries]=======================================================/*======


#include "mbed.h"
#include "arm_book_lib.h"
#include "display.h"

//=====[Main function, the program entry point after power on or reset]========

int main()
{

     displayInit(DISPLAY_CONNECTION_GPIO_8BITS);
    displayCharPositionWrite ( 0,0);
    displayStringWrite("Taller de Sist. ");
    displayCharPositionWrite ( 3,1);
    displayStringWrite("Embebidos");

}