const int ldrPin = A0;
const int buzzerPin = 8;
const int threshold = 500;

int ldrValue = 0;

void setup() {
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  ldrValue = analogRead(ldrPin);
  Serial.println(ldrValue);

  if (ldrValue < threshold) {
    digitalWrite(buzzerPin, HIGH);
  } else {
    digitalWrite(buzzerPin, LOW);
  }

  delay(50);
}