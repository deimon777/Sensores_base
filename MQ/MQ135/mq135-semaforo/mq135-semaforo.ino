// https://www.youtube.com/watch?v=DPywqNps29E
// https://rufianenlared.com/mq-135/

int sensorValue;
int pinInput = 0;

int pinRed = 13;
int pinYellow = 12;
int pinGreen = 11;

int umbralBajo = 300;
int umbralAlto = 400;
void setup() {
  pinMode(pinRed, OUTPUT);
  pinMode(pinYellow, OUTPUT);
  pinMode(pinGreen, OUTPUT);
}
void loop() {
  sensorValue = analogRead(pinInput);
  if (sensorValue < umbralBajo ) {
    semaforo(HIGH, LOW, LOW);
  } else if (sensorValue < umbralAlto) {
    semaforo(LOW, HIGH, LOW);
  } else {
    semaforo(LOW, LOW, HIGH);
  }
  delay(1000);
}

void semaforo(int R, int Y, int G) {
  digitalWrite(pinRed, R);
  digitalWrite(pinYellow, Y);
  digitalWrite(pinGreen, G);
}
