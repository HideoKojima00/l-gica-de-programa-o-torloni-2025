

float numero1= 0.0;
float numero2= 0.0;
float soma;
float subtrair;
float divisao;
float multiplicacao;
int escolhaDaOperacao;
int contador = 0;


void setup()
{
  Serial.begin(9600);
  
  
  do{
    Serial.println("Bem-vindo a calculadora dos deuses a melhor do mundo");
    Serial.println("Escolha uma das opcoes/operacoes:");
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
      soma = numero1 + numero2;
      Serial.println("O resultado foi: " + String(soma));
      break;

      case 2:
      subtrair = numero1 - numero2;
      Serial.println("O resultado foi: " + String(subtrair));
      break;

      case 3:
      divisao = numero1 / numero2;
      Serial.println("O resultado foi: " + String(divisao));
      break;

      case 4:
      multiplicacao = numero1 * numero2;
      Serial.println("O resultado foi: " + String(multiplicacao));
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
    
   