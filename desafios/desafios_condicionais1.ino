/*
controlar dois LEds com comandos digitados no Monitor Serial, sem uso de botoës

Enviar "1" para acender o LEd1.

Enviar "2" para acender o LED2

Enviar "0" para apagar o Ambos.

*/

//variaveis
int ledVermelho = 5;
int ledVerde = 6;
int numero = 0;
	
void setup()
{
  Serial.println(9600);
  
}

void loop()
{
  Serial.println("digite o numero 1 ou 2 ou 0");
  while (! serial.available()){}
  numero = serial.parselnt();
  
  if (numero == 1){
    digitalWrite(ledVermelho, HIGH);
    digitalWrite(ledVerde, LOW);
    //a
  }
  
  if (numero == 2){
    digitalWrite(ledVerde, HIGH);
    digitalWrite(leVermelho, LOW);
    //b
  }
  
  if (numero == 0){
   digitalWrite(ledVerde, LOW);
    digitalWrite(leVermelho, LOW);
    //c
  }