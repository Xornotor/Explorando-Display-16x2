#define RS 2
#define EN 3
#define D4 4
#define D5 5
#define D6 6
#define D7 7

void escreveDisplay(bool d_7, bool d_6, bool d_5, bool d_4){
  digitalWrite(D7, d_7);
  digitalWrite(D6, d_6);
  digitalWrite(D5, d_5);
  digitalWrite(D4, d_4);
  digitalWrite(EN, HIGH);
  delay(10);
  digitalWrite(EN, LOW);
  delay(10); 
}

void inicializa(){
  digitalWrite(RS, LOW);
  digitalWrite(EN, LOW);
  delay(50);
  //FUNCTION SET
  escreveDisplay(LOW, LOW, HIGH, LOW);
  //escreveDisplay(HIGH, LOW, LOW, LOW);

  //LIGA DISPLAY E INICIALIZA CURSOR
  escreveDisplay(LOW, LOW, LOW, LOW);
  escreveDisplay(HIGH, HIGH, HIGH, HIGH);
  
  //LIMPA DISPLAY
  escreveDisplay(LOW, LOW, LOW, LOW);
  escreveDisplay(LOW, LOW, LOW, HIGH);
  
  //RETORNA CURSOR PRO ZERO
  escreveDisplay(LOW, LOW, LOW, LOW);
  escreveDisplay(LOW, LOW, HIGH, LOW);
}

void setup() {
  pinMode(RS, OUTPUT);
  pinMode(EN, OUTPUT);
  pinMode(D4, OUTPUT);
  pinMode(D5, OUTPUT);
  pinMode(D6, OUTPUT);
  pinMode(D7, OUTPUT);

  inicializa();

  //H
  digitalWrite(RS, HIGH);
  escreveDisplay(LOW, HIGH, LOW, LOW);
  escreveDisplay(HIGH, LOW, LOW, LOW);
  digitalWrite(RS, LOW);

  //e
  digitalWrite(RS, HIGH);
  escreveDisplay(LOW, HIGH, HIGH, LOW);
  escreveDisplay(LOW, HIGH, LOW, HIGH);
  digitalWrite(RS, LOW);

  //l
  digitalWrite(RS, HIGH);
  escreveDisplay(LOW, HIGH, HIGH, LOW);
  escreveDisplay(HIGH, HIGH, LOW, LOW);
  digitalWrite(RS, LOW);

  //l
  digitalWrite(RS, HIGH);
  escreveDisplay(LOW, HIGH, HIGH, LOW);
  escreveDisplay(HIGH, HIGH, LOW, LOW);
  digitalWrite(RS, LOW);

  //o
  digitalWrite(RS, HIGH);
  escreveDisplay(LOW, HIGH, HIGH, LOW);
  escreveDisplay(HIGH, HIGH, HIGH, HIGH);
  digitalWrite(RS, LOW);

  //ESPAÇO
  digitalWrite(RS, HIGH);
  escreveDisplay(LOW, LOW, HIGH, LOW);
  escreveDisplay(LOW, LOW, LOW, LOW);
  digitalWrite(RS, LOW);

  //W
  digitalWrite(RS, HIGH);
  escreveDisplay(LOW, HIGH, LOW, HIGH);
  escreveDisplay(LOW, HIGH, HIGH, HIGH);
  digitalWrite(RS, LOW);

  //o
  digitalWrite(RS, HIGH);
  escreveDisplay(LOW, HIGH, HIGH, LOW);
  escreveDisplay(HIGH, HIGH, HIGH, HIGH);
  digitalWrite(RS, LOW);

  //r
  digitalWrite(RS, HIGH);
  escreveDisplay(LOW, HIGH, HIGH, HIGH);
  escreveDisplay(LOW, LOW, HIGH, LOW);
  digitalWrite(RS, LOW);

  //l
  digitalWrite(RS, HIGH);
  escreveDisplay(LOW, HIGH, HIGH, LOW);
  escreveDisplay(HIGH, HIGH, LOW, LOW);
  digitalWrite(RS, LOW);

  //d
  digitalWrite(RS, HIGH);
  escreveDisplay(LOW, HIGH, HIGH, LOW);
  escreveDisplay(LOW, HIGH, LOW, LOW);
  digitalWrite(RS, LOW);

  //!
  digitalWrite(RS, HIGH);
  escreveDisplay(LOW, LOW, HIGH, LOW);
  escreveDisplay(LOW, LOW, LOW, HIGH);
  digitalWrite(RS, LOW);
}

void loop() {
  
}
