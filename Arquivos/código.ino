#include <Stepper.h>

// Definição dos pinos do motor de passo
const int IN1 = 8;
const int IN2 = 9;
const int IN3 = 10;
const int IN4 = 11;

// Definição dos pinos dos LEDs e do botão
const int buttonPin = 2;
const int ledGirandoPin = 3;
const int ledDesligadoPin = 4;

// Número de passos por revolução e instância do objeto Stepper
const int stepsPerRevolution = 2048;
Stepper myStepper(stepsPerRevolution, IN1, IN3, IN2, IN4);

// Variável para armazenar o estado do motor (ligado/desligado)
bool motorLigado = false;

void setup() {
  // Inicializa os pinos do botão e dos LEDs
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledGirandoPin, OUTPUT);
  pinMode(ledDesligadoPin, OUTPUT);

  // Inicializa o motor com a velocidade desejada (opcional)
  myStepper.setSpeed(10);  // Velocidade em RPM (rotações por minuto)
  
  // Inicia com o LED de desligado aceso
  digitalWrite(ledDesligadoPin, HIGH);
}

void loop() {
  // Verifica se o botão foi pressionado
  if (digitalRead(buttonPin) == LOW) {
    // Inverte o estado do motor (liga ou desliga)
    motorLigado = !motorLigado;

    // Se o motor foi ligado
    if (motorLigado) {
      digitalWrite(ledDesligadoPin, LOW);   // Apaga o LED de desligado
      digitalWrite(ledGirandoPin, HIGH);    // Acende o LED de girando
    } else {
      // Se o motor foi desligado
      digitalWrite(ledGirandoPin, LOW);     // Apaga o LED de girando
      digitalWrite(ledDesligadoPin, HIGH);  // Acende o LED de desligado
    }

    // Aguarda um tempo para evitar múltiplas leituras rápidas do botão
    delay(200);
  }

  // Se o motor estiver ligado, gira continuamente
  if (motorLigado) {
    myStepper.step(1);  // Gira o motor de passo um passo
    // Não é necessário delay aqui, a menos que queira controlar a velocidade
  }
} 
