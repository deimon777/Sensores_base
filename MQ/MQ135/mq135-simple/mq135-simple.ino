// https://www.youtube.com/watch?v=DPywqNps29E
// https://rufianenlared.com/mq-135/

int sensorValue;
int pinInput = 0;
void setup() {
  Serial.begin(9600);
}
void loop() {
  sensorValue = analogRead(pinInput);
  Serial.print("Calidad: ");
  Serial.print(sensorValue, DEC);
  Serial.println(" PPM");
  delay(100);
}
