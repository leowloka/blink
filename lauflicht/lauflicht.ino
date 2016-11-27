int anzahl = 6;
int pins[] = {2,3,4,5,6,7};

void setup() {
  for(int i=0; i<anzahl; i=i+1) {
    pinMode(pins[i], OUTPUT);
  }
}

void loop() {
  for(int i=0; i<anzahl; i=i+1) {
     digitalWrite(pins[i], HIGH);
     delay(100);
     digitalWrite(pins[i], LOW);
  }
  for(int i=4; i>0; i=i-1) {
     digitalWrite(pins[i], HIGH);
     delay(100);
     digitalWrite(pins[i], LOW);
  }
}
