//valores




//somadores


float resultado = 0;
//comando
int escolhaDaOperacao;
int contador = 0;


float somar(float numero1, float numero2, float numero3 = 0){
  int numero6;
  
  return (numero1 + numero2 + numero3 );
}
float subtrair(float numero1, float numero2, float numero3 = 5){
  int numero6;
  
  return (numero1 - numero2 + numero3 );
}
float multiplicar(float numero1, float numero2, float numero3 = 10){
  int numero6;
  
  return (numero1 * numero2 + numero3 );
}
float dividir(float numero1, float numero2, float numero3 = 2){
  int numero6;
  
  return (numero1 / numero2 + numero3 );
}



void setup()
{
  Serial.begin(9600);
  
  float numero1= 0.0;
  float numero2= 0.0;
  
  
  do{
    Serial.println("Bem-vindo a calculadora dos deuses a melhor do mundo");
    Serial.println("Escolha uma das opcoes/operacoes:");
    Serial.println("Pense bem qual tipo de operacoes que deseja realizar nesta calculadora!");
    Serial.println("1 - somar");
    Serial.println("2 - subtrair");
    Serial.println("3 - multiplicar");
    Serial.println("4 - dividir");

    while(!Serial.available()){} //Espera o usuario digitar

    escolhaDaOperacao = Serial.parseInt(); //Armazena o que o usuario digitou na variavel

    Serial.println("Agora, para realizar a operacao, digite o 1° numero:");
    while(!Serial.available()){} //Espera o usuario digitar
    numero2 = Serial.parseFloat();

    Serial.println("Agora, digite o segundo numero:");
    while(!Serial.available()){} //Espera o usuario digitar
    numero2 = Serial.parseFloat();

    switch(escolhaDaOperacao){
      case 1:
      float resultado; 
      resultado = somar(numero1, numero2);
      Serial.println("O resultado foi: " + String(resultado));
      break;

      case 2:
      resultado = subtrair(numero1 , numero2);
      Serial.println("O resultado foi: " + String(resultado));
      break;

      case 3:
      resultado = multiplicar(numero1, numero2);
      Serial.println("O resultado foi: " + String(resultado));
      break;

      case 4:
      resultado = dividir (numero1 , numero2);
      Serial.println("O resultado foi: " + String(resultado));
      break;

      default:
      Serial.println("Opcao invalida");

    }

    Serial.println("voce deseja continuar? Se sim, digite [s], se nao digite [n]");
    while(!Serial.available()){} //Espera o usuario digitar

    if (Serial.readString() == "s"){
      contador++;
    }
    else{ 
      contador = 0;

      Serial.println("ate breve, obrigado por usar a calculadora inteligente");
      Serial.println("caso queira voltar, reinicie o sistema.");
    }

  }
  while(contador != 0);
}
  
void loop()
{
  // sem condigo
}
    
   