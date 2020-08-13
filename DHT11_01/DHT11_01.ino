/*
 * ¿Cómo hacemos que no se repita 
 * a cada instante los datos, y que
 * solo lo haga cuando estos han
 * cambiado?
 */
//Incluir librería
#include <DHT.h>
#include <DHT_U.h>

//Inicilizarlo
DHT dht(7,DHT11);

void setup() {
  //Inicilizamos nuestro monitor serie
  Serial.begin(9600);

  //Inicilizar nuestro DHT
  dht.begin();
}

void loop() {
  float humedad=dht.readHumidity();

  //Por defecto nos lee en grados centígrados
  float temperatura=dht.readTemperature();

  //Si queremos que lea en Fahrenheit
  //float temperatura=dht.readTemperature(true);

  Serial.print(temperatura);
  Serial.println(" °C");//Cuando acaba de imprimir 25 °C 
  Serial.print(humedad);
  Serial.println(" %");//Nos va a imprimir 51%
  delay(1000);
}
