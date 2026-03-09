/**!
Author : Thomas
Function to control the led on a pin

*/
#include "led.h"

void set_Pin_mode(int led_pin, int state)
{
    pinMode(led_pin, state);
}

void set_Led(int led_pin, bool state)
{
  digitalWrite(led_pin, state);
}