// Perform fade-in and fade-out operations for an LED

int ledPin = 11;
int brightness;

void setup(){
	pinMode(ledPin, OUTPUT);
}

void loop(){
	for(brightness=0; brightness <= 255; brightness++){
		analogWrite(ledPin, brightness);
		delay(20);
	}

	for(brightness=255; brightness >= 0; brightness--){
		analogWrite(ledPin, brightness);
		delay(20);
	}
}