int gruen = 10;
int rot = 8;
int gelb = 11;

void setup() {
  pinMode(gruen, OUTPUT);
  pinMode(rot, OUTPUT);
  pinMode(gelb, OUTPUT);
}

void loop() {
  digitalWrite(gruen, HIGH);
  digitalWrite(rot, LOW);
  digitalWrite(gelb, HIGH);
  delay(60);
  
  digitalWrite(rot, LOW);
  digitalWrite(gruen, HIGH);
  digitalWrite(gelb, LOW);
  delay(500);
}

void lichter(int rotesLicht, int gruenesLicht, int gelbesLicht, int pause) {
  digitalWrite(gruen, gruenesLicht);
  digitalWrite(rot, rotesLicht);
  digitalWrite(gelb, gelbesLicht);
  delay(pause);
}

