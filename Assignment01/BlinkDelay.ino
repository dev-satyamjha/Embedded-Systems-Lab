// Make the LED blink after a certain delay.

int ledPin = 7;

void setup(){
	pinMode(ledPin, OUTPUT);
}
void loop(){
	digitalWrite(ledPin, HIGH);
	delay(1000);
	digitalWrite(ledPin, LOW);
	delay(2500);
}