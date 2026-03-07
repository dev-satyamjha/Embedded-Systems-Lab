// Print a message on the serial console using an Arduino Microcontroller

void setup(){
	Serial.begin(9600);
}

void loop(){
	Serial.println("Hello From Arduino!");
	delay(200);
}