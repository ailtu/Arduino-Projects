void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Semáforo de alerta - Ligado");
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  delay(500);
  Serial.println("Semáforo de alerta - Desligado");
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  delay(500);
}