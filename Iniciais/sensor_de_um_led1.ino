//Sensor de quatro LEDs
void setup()
{
 
}

void loop()
{
  if (1 == digitalRead(11)) {
    digitalWrite(13, HIGH);
     delay(3000);           // espera 3 milisegundos  } else {
    digitalWrite(13, LOW);   
  }
}