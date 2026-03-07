// Blink LEDs on the basis of user input received

int led1 = 13;
int led2 = 12;
int led3 = 11;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  Serial.begin(9600);
  Serial.println("Actions: Press '1' for LED1, '2' for LED2, '3' for LED3, '0' to OFF ALL");
}

void loop() {
  if (Serial.available() > 0) {
    char input = Serial.read();

    if (input == '1') {
      digitalWrite(led1, HIGH);
      Serial.println("LED 1 is ON");
    } 
    else if (input == '2') {
      digitalWrite(led2, HIGH);
      Serial.println("LED 2 is ON");
    } 
    else if (input == '3') {
      digitalWrite(led3, HIGH);
      Serial.println("LED 3 is ON");
    } 
    else if (input == '0') {
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      Serial.println("All LEDs are OFF");
    }

    else if (input == '\n' || input == '\r') {
      // Do nothing
    }

    else{

    	Serial.println("Please choose a correct value from the commands list");
    }
  }
}