//#include <BMP280.h> // folder libraries
#include "BMP280.h"  // local

BMP280 bmp280;

#define BAUDIOS 9600

void setup() {
  Serial.begin(BAUDIOS);
  delay(10);
  Serial.println("Ejemplo BMP280");

  Wire.begin();  //Join I2C bus
  bmp280.begin();
}

void loop() {
  //Get pressure value
  uint32_t pressure = bmp280.getPressure();
  float temperature = bmp280.getTemperature();

  //Print the results
  Serial.print("Temperatura: ");
  Serial.print(temperature);
  Serial.print("°C \t");
  Serial.print("Presion: ");
  Serial.print(pressure);
  Serial.println("Pa");

  delay(2000);
}
