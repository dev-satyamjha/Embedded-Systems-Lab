int ldrPin = A0;
int ledPin = 9;
int ldrValue = 0;
int ledBrightness = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  ldrValue = analogRead(ldrPin);

  ledBrightness = map(ldrValue, 0, 1023, 255, 0);

  analogWrite(ledPin, ledBrightness);

  Serial.print("LDR Value: ");
  Serial.println(ldrValue);

  delay(200);
}