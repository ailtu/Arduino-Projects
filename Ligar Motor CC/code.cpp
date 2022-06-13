/* código desenvolvido por Ailton Cesar Anizio dos Santos |
 o motor cc representa um ventilador que automaticamente liga
 quando  o sensor detecta aumento da temperatura local */

// definindo porta conectada ao sensor
#define sensorPin A0

void setup()
{

  // apresentar mensagens a um possível monitor
  Serial.begin(9600);

  pinMode(2, OUTPUT);
}

void loop()
{

  int lSensor = analogRead(sensorPin);     // leitura sensor
  float cVolt = lSensor * (5000 / 1024.0); // converte leitura em voltagem
  float temperatura = (cVolt - 500) / 10;  // converte a tensão em temp °C

  // mostra temperatura
  Serial.print(temperatura);
  Serial.println(" °C");
  delay(1000);

  // movimento do motor
  if (temperatura < 23)
  {
    digitalWrite(2, LOW);
  }
  else
    digitalWrite(2, HIGH);
}