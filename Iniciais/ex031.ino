//Faça um programa que receba um número e exiba o seu dobro.


//variaveis
  int numero = 0;
  int dobro = 0;

void setup()
{  
  Serial.begin(96000);
}

void loop()
{
  //entrada
  Serial.println("Digite o seu numero");// Perguta um numero qualquer ao usuario
  while(!Serial.available())//Aguarda o usuario digidar
  numero = Serial.parseInt();
 
  //processamento
  dobro = numero * 2;
 
  //saida
  Serial.println("o dobro do numero eh: " + String(dobro) );
}