// uLCD-144-G2 basic text demo program for uLCD-4GL LCD driver library

//

#include "mbed.h"

#include "uLCD_4DGL.h"


uLCD_4DGL uLCD(D1, D0, D2); // serial tx, serial rx, reset pin;


int main()

{

    // basic printf demo = 16 by 18 characters on screen

    uLCD.printf("106061116\n"); //Default Green on black text

    uLCD.text_width(4); //4X size text

    uLCD.text_height(4);

    uLCD.filled_rectangle(50, 50, 100, 100, 0x00FF00);

    

}