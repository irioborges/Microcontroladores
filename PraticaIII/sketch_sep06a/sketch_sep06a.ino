void setup() {
  pinMode(13, OUTPUT);  
  pinMode(2, OUTPUT);  
  pinMode(3, OUTPUT);    
  pinMode(4, OUTPUT);    
  pinMode(5, OUTPUT);    
  pinMode(6, OUTPUT);    
  pinMode(7, OUTPUT);    
  pinMode(8, OUTPUT);    
  pinMode(9, OUTPUT);    
  //Serial.begin(115200);
  //Serial.println("Começando");
}

void loop() {
  //digitalWrite(13, HIGH);
  //zero();
  //Serial.println("Chegou aqui");
  //delay(1000);
  //Serial.println("Chegou aqui");
  zero();
  delay(1000);
  um();
  delay(1000);
  dois();
  delay(1000);
  tres();
  delay(1000);
  quatro();
  delay(1000);
  cinco();
  delay(1000);
  seis();
  delay(1000);
  sete();
  delay(1000);
  oito();
  delay(1000);
  nove();
  delay(1000);
}

void zero(){
  digitalWrite(2, HIGH);  //b
  digitalWrite(3, HIGH); //a
  digitalWrite(4, HIGH);  //f
  digitalWrite(5, LOW); //g
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW); //pt
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
}

void um(){
  digitalWrite(2, HIGH);  //b
  digitalWrite(3, LOW); //a
  digitalWrite(4, LOW);  //f
  digitalWrite(5, LOW); //g
  digitalWrite(6, LOW);
  digitalWrite(7,LOW); //ponto
  digitalWrite(8, HIGH); //c
  digitalWrite(9, LOW); //e
}

void dois(){
  digitalWrite(2, HIGH);  //b
  digitalWrite(3, HIGH); //a
  digitalWrite(4, LOW);  //f
  digitalWrite(5, HIGH); //g
  digitalWrite(6, HIGH); //d
  digitalWrite(7,LOW); //ponto
  digitalWrite(8, LOW); //c
  digitalWrite(9, HIGH); //e
}

void tres(){
  digitalWrite(2, HIGH);  //b
  digitalWrite(3, HIGH); //a
  digitalWrite(4, LOW);  //f
  digitalWrite(5, HIGH); //g
  digitalWrite(6, HIGH); //d
  digitalWrite(7,LOW); //ponto
  digitalWrite(8, HIGH); //c
  digitalWrite(9, LOW); //e
}

void quatro(){
  digitalWrite(2, HIGH);  //b
  digitalWrite(3, LOW); //a
  digitalWrite(4, HIGH);  //f
  digitalWrite(5, HIGH); //g
  digitalWrite(6, LOW); //d
  digitalWrite(7,LOW); //ponto
  digitalWrite(8, HIGH); //c
  digitalWrite(9, LOW); //e
}

void cinco(){
  digitalWrite(2, LOW);  //b
  digitalWrite(3, HIGH); //a
  digitalWrite(4, HIGH);  //f
  digitalWrite(5, HIGH); //g
  digitalWrite(6, HIGH); //d
  digitalWrite(7,LOW); //ponto
  digitalWrite(8, HIGH); //c
  digitalWrite(9, LOW); //e
}

void seis(){
  digitalWrite(2, LOW);  //b
  digitalWrite(3, HIGH); //a
  digitalWrite(4, HIGH);  //f
  digitalWrite(5, HIGH); //g
  digitalWrite(6, HIGH); //d
  digitalWrite(7,LOW); //ponto
  digitalWrite(8, HIGH); //c
  digitalWrite(9, HIGH); //e
}

void sete(){
  digitalWrite(2, HIGH);  //b
  digitalWrite(3, HIGH); //a
  digitalWrite(4, LOW);  //f
  digitalWrite(5, LOW); //g
  digitalWrite(6, LOW);
  digitalWrite(7,LOW); //ponto
  digitalWrite(8, HIGH); //c
  digitalWrite(9, LOW); //e
}

void oito(){
  digitalWrite(2, HIGH);  //b
  digitalWrite(3, HIGH); //a
  digitalWrite(4, HIGH);  //f
  digitalWrite(5, HIGH); //g
  digitalWrite(6, HIGH); //d
  digitalWrite(7,LOW); //ponto
  digitalWrite(8, HIGH); //c
  digitalWrite(9, HIGH); //e
}

void nove(){
  digitalWrite(2, HIGH);  //b
  digitalWrite(3, HIGH); //a
  digitalWrite(4, HIGH);  //f
  digitalWrite(5, HIGH); //g
  digitalWrite(6, HIGH); //d
  digitalWrite(7,LOW); //ponto
  digitalWrite(8, HIGH); //c
  digitalWrite(9, LOW); //e
}
