#define pompa 8
void setup() {
  pinMode(pompa, OUTPUT);
  pinMode(4, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(4)==LOW){
  digitalWrite(pompa, LOW);
  Serial.println("LOW");
  } else if (digitalRead(4)==HIGH) {
    digitalWrite(pompa, HIGH);
      Serial.println("HIGH");
    }
}
