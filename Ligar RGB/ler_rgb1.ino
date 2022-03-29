#define ledR 4
#define ledB 3
#define ledG 2
#define botao 7
#define maximo 3

int bClic = 0;
int bSolto = 0;
int ciclo = 0;

void setup(){

  pinMode(ledR, OUTPUT);
  pinMode(ledB, OUTPUT);
  pinMode(ledG, OUTPUT);
  
}

void vermelho(){
  
  digitalWrite(ledR, HIGH);
  digitalWrite(ledB, LOW);
  digitalWrite(ledG, LOW);
}

void azul(){
  
  digitalWrite(ledR, LOW);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledG, LOW);
}

void verde(){
  
  digitalWrite(ledR, LOW);
  digitalWrite(ledB, LOW);
  digitalWrite(ledG, HIGH);
}

void Cor(){
  
  if(ciclo == 0){
    vermelho();
  }
  
  else if(ciclo == 1){
    verde();
  }
  
  else if(ciclo == 2){
    azul();
  }
  
  ciclo++;
  
  if(ciclo > maximo -1){
   ciclo = 0;
  }
}

void vef(){
  
  if(digitalRead(botao) == HIGH){
    bSolto = 1;
    bSolto = 0;
  }
  
  else {
    bSolto = 1;
  }
  
  if((bSolto == 1)and(bSolto == 1)){
    bClic = 0;
    bSolto = 0;
  
    Cor();
}
}

void loop(){
 vef();
}