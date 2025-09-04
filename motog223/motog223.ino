int mfrente = 10;
int mtras = 11;
int nfrente = 7;
int ntras = 6;




void setup() {
pinMode(mfrente, OUTPUT);
pinMode(mtras, OUTPUT);
pinMode(nfrente, OUTPUT);
pinMode(ntras, OUTPUT);
}

void loop() {
  frente();
  delay(2000);

  parar();
  delay(1000);

  tras();
  delay(2000);

  parar();
  delay(1000);
}

void frente(){
  digitalWrite(mfrente, HIGH );
  digitalWrite(mtras, LOW);
  digitalWrite(nfrente, HIGH );
  digitalWrite(ntras, LOW);
}

void tras(){
  digitalWrite(mfrente, LOW);
  digitalWrite(mtras, HIGH);
  digitalWrite(nfrente, LOW);
  digitalWrite(ntras, HIGH);
}
void parar(){
  digitalWrite(mfrente, LOW);
  digitalWrite(mtras, LOW);
  digitalWrite(nfrente, LOW);
  digitalWrite(ntras, LOW);
}