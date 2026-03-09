#include <Arduino.h>

void NT3H2111_I2C_init();  //Initialize the I2C bus with the right pins

void I2C_detect_NT3H2111(int NT3H2111_I2C_address);  //Detect the presence of an NT3H2111 chip at the specified address