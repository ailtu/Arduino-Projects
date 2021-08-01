//porta automatizada com sensor de presença e servo
//feito em dupla com Maria do Carmo Alcantara Silvestre

#include <Servo.h>

int distancia = 0;

long moveServo(int triggerPin, int echoPin) {
  pinMode(triggerPin, OUTPUT);
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(1);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
    
  return pulseIn(echoPin, HIGH);
}

Servo servo_2; //ligado ao Sinal na porta 2 do arduino
int posicaoInicial = 0.01723 * moveServo(13, 12) -2; //definir a posição e porta

void setup() {
servo_2.attach(2);
Serial.begin(9600);
}

void loop() {
  distancia = 0.01723 * moveServo(13, 12);
  Serial.println(distancia);
  
  if (distancia < posicaoInicial) {
     servo_2.write(90); // move o servo se a distancia for menor
  
} else {
   servo_2.write(1); // permanece fechada ou volta para 0 graus se a distancia for maior
}
  delay(10);
}