#define TRIG_PIN 6
#define ECHO_PIN 5
#define IR_PIN 7

#define TD 10
#define SS 0.0340

float duration = 0;
float distance = 0;
float lastDistance = 0;

int irValue = 0;
int lastIrValue = 0;

int count = 0;

void setup() {
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, OUTPUT);
  pinMode(IR_PIN, INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(TRIG_PIN, LOW);
  delay(20);

  digitalWrite(TRIG_PIN, HIGH);
  delay(100);
  digitalWrite(TRIG_PIN, LOW);

  duration = pulseIn(ECHO_PIN, HIGH);
  distance = (duration * SS) / 2;

  irValue = digitalRead(IR_PIN);

  if (lastDistance > TD && distance < TD) {
    count++;
    Serial.print("entred | count: ");
    Serial.println(count);
  }

  if (lastIrValue == LOW && irValue == HIGH) {
    if (count > 0)
      count--;
    Serial.print("exited | count: ");
    Serial.println(count);
  }

  lastDistance = distance;
  lastIrValue = irValue;

  delay(100);
}