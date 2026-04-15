void setup() {
  pinMode(sensorPin, INPUT);
  pinMode(ledObstacle, OUTPUT);
  pinMode(ledNoObstacle, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  int sensorValue = digitalRead(sensorPin);
  Serial.println(sensorValue);

  if (sensorValue == LOW) {
    digitalWrite(ledObstacle, HIGH);
    digitalWrite(ledNoObstacle, LOW);
  } else {
    digitalWrite(ledObstacle, LOW);
    digitalWrite(ledNoObstacle, HIGH);
  }

  delay(200);
}