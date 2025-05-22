void setup() {
  Serial.begin(9600); // Inicia a comunicação serial
}

void loop() {
  int par = 60; 
  int impar = 81; 
  
  while (par <= 80 || impar <= 101) {
    // Exibe números pares de 60 a 80
    if (par <= 80) {
      if (par % 2 == 0) { // Verifica se é par
        Serial.print("Par: ");
        Serial.println(par);
      }
      par++; 
    }
    
    // Exibe números ímpares de 81 a 101
    if (impar <= 101) {
      if (impar % 2 != 0) { // Verifica se é ímpar
        Serial.print("Ímpar: ");
        Serial.println(impar);
      }
      impar++; // Incrementa o contador de ímpares
    }
    
    delay(500); // Pequeno atraso para facilitar a leitura no monitor serial
  }
  
  Serial.println("Fim da contagem!");
  while(true);
}
