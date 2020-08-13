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

  //Poner un mensaje en el centro del LCD
  lcd.setCursor(7,0);
  lcd.print("Mec In Home");
  lcd.setCursor(4,1);
  lcd.print("Prueba de texto deslizante");

}

void loop() {
  //Desplazamiento
  lcd.scrollDisplayLeft();
  delay(500);
}
