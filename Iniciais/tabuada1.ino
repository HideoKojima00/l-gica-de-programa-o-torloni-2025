//Tabuada


int tabuadaEscolhida;
int resultado;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
 Serial.println("bem vindo :)");
  Serial.println("digite qual tabuada voce deseja ver :)");
  while(!Serial.available()){} //Espera a tabuada
  tabuadaEscolhida = Serial.parseInt();
  
  for(int contador = 1; contador <= 10; contador++){
  resultado = tabuadaEscolhida * contador;
    
    //Exibir assim: 2x1 = 20
    Serial.println(String(tabuadaEscolhida) + " x " + String(contador) + " = " + String(resultado));
    
  }
  
}