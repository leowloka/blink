int rot = 10;
int gruen = 9;
int schalter = 2;
// Am Anfang soll die rote LED leuchten...
bool rotLeuchtet = true;
// ...und die grüne LED dunkel sein.
bool gruenLeuchtet = false;
// Wenn der Schalter geöffnet ist, lesen wir an PIN 2 den Wert 1.
// Darauf setzen wir dann auch letzterSchalterWert.
int letzterSchalterWert = 1;

void setup() {
  pinMode(rot, OUTPUT);
  pinMode(gruen, OUTPUT);
  pinMode(schalter, INPUT);
}

void loop() {
  // Wir lesen den aktuellen Schalterwert
  int schalterWert = digitalRead(schalter);
  // Wenn der letzte Schalterwert 1 war (also der Schalter geöffnet war)
  // und der aktuelle Schalterwert 0 ist (also der Schalter geschlossen ist)...
  if ((letzterSchalterWert == 1) && (schalterWert == 0)) {
    // ... dann drehen wir die Werte von rotLeuchtet und gruenLeuchtet um.
    // Aus wahr wird !wahr (nicht wahr = falsch), aus falsch wird !falsch (nicht falsch = wahr).
    rotLeuchtet = !rotLeuchtet;
    gruenLeuchtet = !gruenLeuchtet;
  }
  // Danach speichern wir den aktuellen Schalterwert als letzterSchalterWert
  letzterSchalterWert = schalterWert;  
  // Jetzt überprüfen wir die Werte von gruenLeuchtet und rotLeuchtet und schreiben
  // die gewünschten Zustände an gruen und rot.
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
