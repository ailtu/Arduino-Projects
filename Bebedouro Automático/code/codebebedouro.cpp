/* Projeto protótipo de bebedouro automático que visa ajudar
 pessoas com deficiência visual. */  

int sensor = 7;
int movimento = 0;
void setup(){
  
  pinMode(13, OUTPUT); // porta do motor
  pinMode(12, OUTPUT); // buzzer piezo
  pinMode(sensor, INPUT); // porta do sensor
  Serial.begin(9600);  

}

void loop() {
     
  movimento = digitalRead(sensor);
  Serial.println(movimento);
  
  if (movimento == 0){ 
  //não fazer nada enquanto nenhum movimento for detectado  
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
} 
  else {    
  // aviso sonoro da "saída de água"
  delay(2000); // tempo até o aviso sonoro
  digitalWrite(12, HIGH);
  delay(500);
  digitalWrite(12, LOW);
  delay(500);
  digitalWrite(12, HIGH);
  delay(500);
  digitalWrite(12, LOW);
  
  // liga motor por 5 segundos (sai água)
  digitalWrite(13, HIGH);
  delay(5000);
  digitalWrite(13, LOW);    
}
  delay(1000);
}