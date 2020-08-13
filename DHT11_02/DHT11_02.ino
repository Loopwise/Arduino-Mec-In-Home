//Incluir las librerías
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DHT.h>

//Creamos nuestro DHT
DHT dht(7,DHT11);

//Creamos nuestro lcd
LiquidCrystal_I2C lcd(0x3F,16,2);
void setup() {
  //Configuraciones previas de nuestro LCD
  lcd.init();
  lcd.backlight();

  //Inicializamos nuestro DHT
  dht.begin();

}

void loop() {
  //Creamos nuestras variables para la humedad
  //y temperatura
  float h=dht.readHumidity();
  float t=dht.readTemperature();

  //Imprimimos nuestra humedad relativa
  //en la primera línea
  lcd.setCursor(0,0);
  lcd.print("Humedad: ");
  lcd.print(h);
  lcd.print(" %");

  //Imprimimos la temperatura en nuestra
  //segunda línea
  lcd.setCursor(0,1);
  lcd.print("Temp: ");
  lcd.print(t);
  lcd.print(" C");

  //Delay
  delay(1000);

}
