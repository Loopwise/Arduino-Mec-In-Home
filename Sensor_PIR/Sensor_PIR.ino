int pin=13;
int pinPIR=2;
void setup(){
  //Salida para que se prenda
  pinMode(pin,OUTPUT);

  //Entrada para ver sí hay movimiento
  pinMode(pinPIR, INPUT);

  //Breve retraso para que el sensor PIR
  //se pueda calibrar
  delay(20000);
}

void loop(){
  int n=digitalRead(pinPIR);
  if (n==1){
    digitalWrite(pin,HIGH);
    delay(1000);
    digitalWrite(pin,LOW);
  }
}
