/* SKU CoE ITE - ParkSooYoung */
/* Grade 3 , Semester 2 , Chapter 7 , Number 2 */

#include <stdio.h>
#include <wiringPi.h>
#include <lcd.h>

int main(void)
{
    int disp1;

    if(wiringPiSetupGpio() == -1)
    {
        return 1;
    }

    disp1 = lcdInit(2, 16, 4, 2, 4, 20, 21, 12, 16, 0, 0, 0, 0);
    // int lcdInit (int rows, int cols, int bits, int rs, int strb, int d4, int d5, int d6, int d7, int d0, int d1, int d2, int d3);

    lcdClear(disp1);

    lcdPosition(disp1, 0, 0);
    lcdPuts(disp1, "Hello World");

    lcdPosition(disp1, 0, 1);
    lcdPuts(disp1, "Have nice day!");

    delay(1000);

    return 0;
}
