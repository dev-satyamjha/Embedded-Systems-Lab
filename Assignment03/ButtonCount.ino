// Count the number of times button is pressed and print it in console

const int buttonPin = 2;
const int ledPin = 8;

int buttonState = 0;
int lastbuttonState = 0;
int count = 0;

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
   buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH && lastbuttonState == LOW) {
    count++;
    Serial.print("Button pressed: ");
    Serial.println(count);
    delay(200); 
}

lastbuttonState = buttonState;


}
