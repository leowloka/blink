int rot = 10;
int gruen = 9;
int schalter = 2;
bool rotLeuchtet = true;
bool gruenLeuchtet = false;
int letzterSchalterWert = 1;

void setup() {
  Serial.begin(9600);
  pinMode(rot, OUTPUT);
  pinMode(gruen, OUTPUT);
  pinMode(schalter, INPUT);
}

void loop() {
  int schalterWert = digitalRead(schalter);
  if ((letzterSchalterWert == 1) && (schalterWert == 0)) {
    rotLeuchtet = !rotLeuchtet;
    gruenLeuchtet = !gruenLeuchtet;
  }
  letzterSchalterWert = schalterWert;  
  if (gruenLeuchtet) {
    digitalWrite(gruen, HIGH);
  } else {
    digitalWrite(gruen, LOW);
  }
  if (rotLeuchtet) {
    digitalWrite(rot, HIGH);
  } else {
    digitalWrite(rot, LOW);
  }
  delay(50);
}
