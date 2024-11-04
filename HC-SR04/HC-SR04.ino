#define TRIGGER 2    //Pin digital 2 para el TRIGGER del sensor
#define ECHO 3       //Pin digital 3 para el ECHO del sensor
long tiempo;         //timepo que demora en llegar el eco
long distancia;      //distancia en centimetros

#define BAUDIOS 9600

void setup() {
  Serial.begin(BAUDIOS);         //iniciailzamos la comunicación
  delay(10);
  Serial.println("Ejemplo HC-SR04");
  pinMode(TRIGGER, OUTPUT);   //pin como salida
  pinMode(ECHO, INPUT);       //pin como entrada
  digitalWrite(TRIGGER, LOW); //Inicializamos el pin con 0
}

void loop()
{
  digitalWrite(TRIGGER, HIGH);
  delayMicroseconds(10);        //Enviamos un pulso de 10us
  digitalWrite(TRIGGER, LOW);

  tiempo = pulseIn(ECHO, HIGH); //obtenemos el ancho del pulso
  distancia = tiempo / 59;      //escalamos el tiempo a una distancia en cm

  Serial.print("Distancia: ");
  Serial.print(distancia);      //Enviamos serialmente el valor de la distancia
  Serial.println(" cm");
  delay(1000);                  //Hacemos una pausa de 1seg
}
