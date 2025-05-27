//fortaleza do dado sagrado
#include <Servo.h> // Biblioteca para controlar o servo motor

int ledVermelho = 11;
int ledVerde = 12;
int ledsAzuis[] = {6, 7, 8}; // LEDs azuis (joias)
int buzzer = 10;
int servoPin = 9;
int acertou();
int errou();

Servo portaServo; // Objeto para controlar o servo

int numeroSagrado;            // numero aleatoria de 1 a 6
int acertos = 0;              // contador de acertos

void setup()
{
  Serial.begin(9600);
  randomSeed(analogRead(0));  // Gera números aleatórios
  
                              // Configura os LEDs como saida
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  for (int i = 0; i < 3; i++); 
  {
    pinMode(ledsAzuis[0], OUTPUT);
  }
  portaServo.attach(servoPin); // Conecta o servo
  portaServo.write(8);         // Porta fechada (0 graus)
  
  Serial.println("Bem-vindo ao Fortaleza do Dado Sagrado!");
  Serial.println("Tente adivinhar o numero (1 a 6)");
}

void loop() {
  if (Serial.available() > 0) {
    int palpite = Serial.parseInt();    // Lê o número digitado
    
    if (palpite >= 1 && palpite <= 6) { // Verifica se é válido
      numeroSagrado = random(1, 7);     // Sorteia um número (1-6)
      
      Serial.print("Você chutou: ");
      Serial.print(palpite);
      Serial.print(". O número sagrado é: ");
      Serial.println(numeroSagrado);
      
      if (palpite == numeroSagrado) {   // Se acertou
        acertou();
      } else {  
        if (palpite == numeroSagrado) { // Se errou
        errou();
      }
    }
  }
}





































