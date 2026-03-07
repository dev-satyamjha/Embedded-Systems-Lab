// Blink LEDs according to the count of buttons pressed.

const int buttonPin = 2;

const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;

int buttonState = 0;
int lastButtonState = 0;
int count = 0;

void setup() {
  pinMode(buttonPin, INPUT);

  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  
  if (buttonState == HIGH && lastButtonState == LOW) {
    
    count++;

    if (count > 3) {
      count = 0;  
    }

    changeColor(count);

    delay(200);  
  }

  lastButtonState = buttonState;
}

void changeColor(int value) {

  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, LOW);

  if (value == 1) {
    digitalWrite(greenPin, HIGH);
  }
  else if (value == 2) {
    digitalWrite(redPin, HIGH);
  }
  else if (value == 3) {
    digitalWrite(bluePin, HIGH);
  }
}
