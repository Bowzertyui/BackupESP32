#include "led.h"
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  set_Pin_mode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //delay(10); // this speeds up the simulation
  delayMicroseconds(1000000);
  set_Led(13, HIGH);
  delayMicroseconds(1000000);
  set_Led(13, LOW);
}
