void setup()
{
  //definir porta aos leds
  
  //vermelhos
  pinMode (12, OUTPUT);
  pinMode (7, OUTPUT);
  
  //amarelos
  pinMode (11, OUTPUT);
  pinMode (10, OUTPUT);
  pinMode (9, OUTPUT);
  pinMode (6, OUTPUT);
  pinMode (5, OUTPUT);
  pinMode (4, OUTPUT);
  
  //verdes
  pinMode (8, OUTPUT);
  pinMode (3, OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{
 Serial.println("Atenção!");
  digitalWrite(12, HIGH);
  digitalWrite(7, HIGH);
 delay(3000);
  
 Serial.println("Preparar");
  digitalWrite(11, HIGH);
  digitalWrite(6, HIGH);
  delay(500);
  digitalWrite(10, HIGH);
  digitalWrite(5, HIGH);
  delay(500);
  digitalWrite(9, HIGH);
  digitalWrite(4, HIGH);
  delay(500);
  
  digitalWrite(12, LOW);
  digitalWrite(7, LOW);
  digitalWrite(11, LOW);
  digitalWrite(6, LOW);
  digitalWrite(10, LOW);
  digitalWrite(5, LOW);
  digitalWrite(9, LOW);
  digitalWrite(4, LOW);
  
 Serial.println("JÀ");
  digitalWrite(8, HIGH);
  digitalWrite(3, HIGH);
  delay(5000);
  digitalWrite(8, LOW);
  digitalWrite(3, LOW);
  
}