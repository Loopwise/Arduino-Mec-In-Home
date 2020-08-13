#include <Servo.h>
int servo=9;

// Crear nuestro servo
Servo myservo;
void setup(){
  //Inicializar nuestro pin como servo
  myservo.attach(servo);
  Serial.begin(9600);
}

void loop(){
  //Leemos el valor del potenciometro 0-1023
  int adc=analogRead(A0);
  
  //Ángulo que recorre el servomotor es desde 0-180
  int angulo=map(adc,0,1023,0,180);

  //Ponemos nuestro servo en el ángulo dado
  myservo.write(angulo);

  //Vamos a imprimir en nuestro Serial
  Serial.print("El ángulo es: ");
  Serial.println(angulo);

  //Retraso para poder leer bien
  delay(500);
}
