/**!
Author : Thomas
Function to read and write to the NT3H2111 NFC chip in I2C

*/
#include "NT3H2111.h"

#include <Wire.h>

void NT3H2111_init() {
  Wire.begin(SDA_PIN, SCL_PIN);
}

void NT3H2111_scan(int NT3H2111_I2C_address) {
  Serial.println("Scanning I2C...");

  Wire.beginTransmission(NT3H_ADDR);
  if (Wire.endTransmission() == 0) {
    Serial.println("NT3H2111 detected!");
  } else {
    Serial.println("Device not found");
  }
}
