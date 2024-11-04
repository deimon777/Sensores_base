/* Aduino      LCD_I2C
 *  5V          5V
 *  GND         GND
 *  A4          SDA
 *  A5          SDL
 */

//#include <I2C_LCD.h> // folder libraries
#include "I2C_LCD.h" // local

I2C_LCD lcd(0x27);

void setup() {
  Wire.begin();
  lcd.begin(16, 2);

  //  display fixed text once
  lcd.setCursor(0, 0);
  lcd.print("millis: ");
}

void loop() {
  lcd.setCursor(8, 0);
  lcd.print(millis());
  delay(1000);
}