int resultado;
int numeros;
  
void setup()
{
Serial.begin(9600);
  
  for(int contador = 1; contador <= 100; contador +=1){
  resultado = (numeros + contador);\
    delay(1000); //Espera um millisegundos,"teoricamente"
    Serial.println("aqui esta o resultado: " + String(resultado));
  
  }

}

void loop()
{
  
}