//Adapted from lab_6_4.6 main.cpp

#include "mbed.h"

Ticker flipper;
DigitalOut led(LED3);

void flip()
{
   led = !led;
}

int main()
{
   led = 1;
   flipper.attach(&flip, 500ms);

}
