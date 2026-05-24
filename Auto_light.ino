const int ldrPin = A0;
const int ledPin = 8;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int sensorValue = analogRead(ldrPin);
  
  if (sensorValue < 150) {
    digitalWrite(ledPin, HIGH); // Turn LED ON when dark
  } else {
    digitalWrite(ledPin, LOW);  // Turn LED OFF when bright
  }
}