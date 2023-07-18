const int greenLedPin = 5;
const int yellowLedPin = 6;
const int redLedPin = 7;
const int waterSensorPin = A0;

void setup() {
  pinMode(greenLedPin, OUTPUT);
  pinMode(yellowLedPin, OUTPUT);
  pinMode(redLedPin, OUTPUT);
  pinMode(waterSensorPin, INPUT);
}

void loop() {
  int waterLevel = analogRead(waterSensorPin);

  if (waterLevel < 500) {
    digitalWrite(redLedPin, HIGH);
    digitalWrite(yellowLedPin, LOW);
    digitalWrite(greenLedPin, LOW);
  } else if (waterLevel >= 500 && waterLevel < 750) {
    digitalWrite(redLedPin, LOW);
    digitalWrite(yellowLedPin, HIGH);
    digitalWrite(greenLedPin, LOW);
  } else {
    digitalWrite(redLedPin, LOW);
    digitalWrite(yellowLedPin, LOW);
    digitalWrite(greenLedPin, HIGH);
  }

  delay(100);
}
