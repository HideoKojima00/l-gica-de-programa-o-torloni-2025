// C++ code
//criar uma funcao para exibir um cabecalho --- PROGRAMA JOGO DE DADOS --

//Variaveis globais


void desenhaPontinhos(int qtdPontos = 5, int tempo = 700)
{
  for(int ponto = 0; ponto <= 4 ; ponto++){
    Serial.println("."); 
    delay(1000);
  }
}

void desenhaCabecalho()

{
  Serial.println("************************************");
  Serial.println("--- Programa de Jogo de Dados --- ");
  Serial.println("************************************");
  Serial.println();
  delay(500);
}

void setup()
{
  
  
  
  
  Serial.begin(9600);
  randomSeed(analogRead(0));//inicia e normaliza a porta randoomica para evitar pegar o mesmo numero
}

void loop()
{
  desenhaCabecalho();//desenha o cabecalho
  
  //perguntar ao usuario quantas vezes ele quer jogar
  //criar os vetores baseados na quantidade de rodaas
  //jogar apenas essa quantidade(laco de repeticao)
  
  //entrada
  Serial.println("Quantas vezes voce quer jogar?");
  while(!Serial.available());
  int qtdRodadas = Serial.parseInt();//rodadas do usuario
  
  //processamento do jogo
  for(int r = 0;r < qtdRodadas; r++)
  {//aqui dentro, o jogo todo!!!
   //solicita o palpite do usuario
   Serial.println("Digite um palpite 1 a 6: ");
   while(!Serial.available());
   int numeroPalpite = Serial.parseInt()
  
  //jogar o dado- sorteia um numero randomico/aleatorio de 1 ate 7 - 1, ou seja, 6
  int numeroSorteado = random(1,7);//numero de 1 a 6

  //exibir o palpite do usuario


  Serial.println("Seu palpite: " + String(numeroPalpite));

  desenhaPontinhos();

  Serial.println("Numero sorteado: " + String(numeroSorteado));

  



  if(numeroPalpite == numeroSorteado)
  {
    Serial.println("Parabens, voce ganhhou!");

  } else {

    Serial.println("Que pena, tente outra vez!");
  

  }//fim do for das rodadas
    
  //ao finalizar, mostrar as estatisticas das jogadas - um relatorios
  

  Serial.println("Reiniciando o sistema....");
  delay(500);

  }//fim do for da rodada
  
  Serial.println("FIM DO JOGO, REINICIANDO O SISTEMA!!");
  
  
  
  
  
 









}