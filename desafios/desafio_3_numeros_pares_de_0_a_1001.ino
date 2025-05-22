int resultado;
int numeros;
  
  
void setup()
{
Serial.begin(9600);
  
  for(int contador = 0; contador <= 100; contador += 2){
  resultado = (numeros + contador);
    delay(1000);
    Serial.println("aqui esta o resultado: " + String(resultado));
  }
  
}



void loop()
{
 
}