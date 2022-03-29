
void setup()
{
  pinMode (2, OUTPUT);
  pinMode (3, OUTPUT);
  pinMode (4, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Semáforo Tradicional - Vermelho ligado");
 digitalWrite(2, HIGH);
  delay(3000);
  Serial.println("Semáforo Tradicional - Amarelo ligado");
 digitalWrite(3, HIGH);
  delay(2000);
 digitalWrite(2, LOW);
 digitalWrite(3, LOW);
  Serial.println("Semáforo Tradicional - Ver e Ama desligados");
  Serial.println("Semáforo Tradicional - Verde ligado");
 digitalWrite(4, HIGH); 
  delay(5000);
 digitalWrite(4, LOW);
  Serial.println("Semáforo Tradicional - Verde desligado");
}