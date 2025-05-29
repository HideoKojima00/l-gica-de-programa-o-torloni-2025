#include <LiquidCrystal.h>
LiquidCrystal lcd(11, 10, 5, 4, 3, 2);
int rojo = 7;
int verde = 6;
int parlante = 9;
int motor=8;
void setup() {
Serial.begin(9600);
lcd.begin(16, 2);
pinMode(rojo, OUTPUT);
pinMode(verde, OUTPUT);
}
void loop() {
int distancia = 0.009 * readUltrasonicDistance(A1, A0);
if(distancia<=10)
{
distancia=10;
digitalWrite(verde, HIGH);
digitalWrite(rojo, LOW);
digitalWrite(motor, LOW);
}
if(distancia>=100)
{
distancia=100;
digitalWrite(verde, LOW);
digitalWrite(rojo, HIGH);
digitalWrite(motor, HIGH);
tone(parlante,200,200);
delay(1000);
}
int porcentaje= map(distancia,10,100,100,0);
Serial.println(0, 0);
Serial.println("Medidor de Agua");

Serial.println(0, 1);
Serial.println(" Nivel=");
Serial.println(porcentaje);
Serial.println("% ");
Serial.println(distancia);
}
long readUltrasonicDistance(int triggerPin, int echoPin)
{
pinMode(triggerPin, OUTPUT);
digitalWrite(triggerPin, LOW);
delayMicroseconds(2);
digitalWrite(triggerPin, HIGH);
delayMicroseconds(10);
digitalWrite(triggerPin, LOW);
pinMode(echoPin, INPUT);
  return pulseIn(echoPin, HIGH);
}