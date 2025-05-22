int resultado;
int numero;


void setup()
{
 Serial.begin(9600);
 
  for(int contador = 0; contador <= 100; contador += 5){
  resultado = (numero + contador);
    delay(1000);
  Serial.println("aqui esta o resultado: " + String(resultado));
  }
}


void loop()
{
 
  
}
