/*
 * SDA: A4
 * SCL: A5
 */

 #include <Wire.h>
 #include <LiquidCrystal_I2C.h>

//Creado nuestro objeto LiquidCrystal
LiquidCrystal_I2C lcd(0x3F,16,2);
 
void setup() {
  //Inicializamos nuestro LCD
  lcd.init();

  //Prender la luz de fondo
  lcd.backlight();

  //Escribir en el LCD
  lcd.print("Hola Mundo");

}

void loop() {
  //Ponemos el cursor en el espacio 0 de la segunda fila
  lcd.setCursor(0,1);

  //Imprima cuántos segundos han pasado
  lcd.print(millis()/1000); //Nos muestra los segundos
  lcd.print("segundos");
  delay(100);
  
}
