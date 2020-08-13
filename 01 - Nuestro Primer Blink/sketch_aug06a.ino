/*
 *  Crear una serie de 3 leds que se prendan y apaguen mutuamente
 *  en diferentes pines.
 */
//Siempre que usemos un PIN
int pin=8;

void setup()
{
    //Definimos nuestro PIN 13
  // como salida (OUTPUT)
  pinMode(pin, OUTPUT);
}

void loop()
{
  //Hemos prendido nuestro LED
  digitalWrite(pin, HIGH);
  delay(100); // Espera por 1 segundo - 1000 milisegundos
  
  //Apagar nuestro LED
  digitalWrite(pin, LOW);
  delay(100); // Espera por 1 segundo - 1000 milisegundos)
}
