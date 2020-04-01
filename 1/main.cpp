// uLCD-144-G2 basic text demo program for uLCD-4GL LCD driver library

//

#include "mbed.h"

#include "uLCD_4DGL.h"


Serial pc( USBTX, USBRX );
uLCD_4DGL uLCD(D1, D7, D2); // serial tx, serial rx, reset pin;
PwmOut PWM1(D0);
AnalogIn Ain(A0);

float i;
float a = 0.1;
int main()

{

    // basic printf demo = 16 by 18 characters on screen

    uLCD.printf("106061116\n"); //Default Green on black text

    uLCD.text_width(4); //4X size text

    uLCD.text_height(4);

    uLCD.filled_rectangle(50, 50, 100, 100, 0x00FF00);

    
    while(1){
        for( i=0; i<=1 || i>=0; i=i+a){
        PWM1 = i;
            if(a==1 || a==0){
              a = -a;
            }
        wait(0.1);
        }
    }


}