//Como ficam os pinos do arduino no display:
//7 6     5 4 
//_ _ GND _ _ 
//LEDS
//LEDS
//11 10   8 9
//_ _ GND _ _

const byte interruptPin = 2;
int Contador = 0;

void setup() {
  pinMode(13, OUTPUT);  
  pinMode(2, INPUT);  
  pinMode(3, OUTPUT);    
  pinMode(4, OUTPUT);    
  pinMode(5, OUTPUT);    
  pinMode(6, OUTPUT);    
  pinMode(7, OUTPUT);    
  pinMode(8, OUTPUT);    
  pinMode(9, OUTPUT);    
  pinMode(10, OUTPUT);    
  pinMode(11, OUTPUT);    
  pinMode(12, INPUT);
  attachInterrupt(digitalPinToInterrupt(interruptPin), zerar, RISING);
  
}

void loop() {  
  contagem();
}

void contagem(){
  if(Contador == 0){
    zero();
  }
  if(Contador == 1){
    um();
  }
  if(Contador == 2){
    dois();   
  }
  if(Contador == 3){
    tres();  
  }
  if(Contador == 4){
    quatro();  
  }
  if(Contador == 5){
    cinco();
  }
  if(Contador == 6){
    seis();
  }
  if(Contador == 7){
    sete();
  }
  if(Contador == 8){
    oito();
  }
  if(Contador == 9){
    nove();
    Contador = 0;  
  }
  Contador++; 
  delay(1000);
}

void zero(){
  digitalWrite(4, HIGH);  //b
  digitalWrite(5, HIGH); //a
  digitalWrite(6, HIGH);  //f
  digitalWrite(7, LOW); //g
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW); //pt
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
}

void um(){
  digitalWrite(4, HIGH);  //b
  digitalWrite(5, LOW); //a
  digitalWrite(6, LOW);  //f
  digitalWrite(7, LOW); //g
  digitalWrite(8, HIGH); //c
  digitalWrite(9,LOW); //ponto
  digitalWrite(10, LOW); //e
  digitalWrite(11, LOW); //
}

void dois(){
  digitalWrite(4, HIGH);  //b
  digitalWrite(5, HIGH); //a
  digitalWrite(6, LOW);  //f
  digitalWrite(7, HIGH); //g
  digitalWrite(8, LOW); //c
  digitalWrite(9,LOW); //ponto
  digitalWrite(10, HIGH); //d
  digitalWrite(11, HIGH); //
}

void tres(){
  digitalWrite(4, HIGH);  //b
  digitalWrite(5, HIGH); //a
  digitalWrite(6, LOW);  //f
  digitalWrite(7, HIGH); //g
  digitalWrite(8, HIGH); //d
  digitalWrite(9,LOW); //ponto
  digitalWrite(10, HIGH); //c
  digitalWrite(11, LOW); //e
}

void quatro(){
  digitalWrite(4, HIGH);  //b
  digitalWrite(5, LOW); //a
  digitalWrite(6, HIGH);  //f
  digitalWrite(7, HIGH); //g
  digitalWrite(8, HIGH); //d
  digitalWrite(9,LOW); //ponto
  digitalWrite(10, LOW); //c
  digitalWrite(11, LOW); //e
}

void cinco(){
  digitalWrite(4, LOW);  //b
  digitalWrite(5, HIGH); //a
  digitalWrite(6, HIGH);  //f
  digitalWrite(7, HIGH); //g
  digitalWrite(8, HIGH); //d
  digitalWrite(9,LOW); //ponto
  digitalWrite(10, HIGH); //c
  digitalWrite(11, LOW); //e
}

void seis(){
  digitalWrite(4, LOW);  //b
  digitalWrite(5, HIGH); //a
  digitalWrite(6, HIGH);  //f
  digitalWrite(7, HIGH); //g
  digitalWrite(8, HIGH); //d
  digitalWrite(9,LOW); //ponto
  digitalWrite(10, HIGH); //c
  digitalWrite(11, HIGH); //e
}

void sete(){
  digitalWrite(4, HIGH);  //b
  digitalWrite(5, HIGH); //a
  digitalWrite(6, LOW);  //f
  digitalWrite(7, LOW); //g
  digitalWrite(8, HIGH);
  digitalWrite(9,LOW); //ponto
  digitalWrite(10, LOW); //c
  digitalWrite(11, LOW); //e
}

void oito(){
  digitalWrite(4, HIGH);  //b
  digitalWrite(5, HIGH); //a
  digitalWrite(6, HIGH);  //f
  digitalWrite(7, HIGH); //g
  digitalWrite(8, HIGH); //d
  digitalWrite(9,LOW); //ponto
  digitalWrite(10, HIGH); //c
  digitalWrite(11, HIGH); //e
}

void nove(){
  digitalWrite(4, HIGH);  //b
  digitalWrite(5, HIGH); //a
  digitalWrite(6, HIGH);  //f
  digitalWrite(7, HIGH); //g
  digitalWrite(8, HIGH); //d
  digitalWrite(9,LOW); //ponto
  digitalWrite(10, HIGH); //c
  digitalWrite(11, LOW); //e
}

void zerar(){
  Contador = 0;
  //contagem();  
}
