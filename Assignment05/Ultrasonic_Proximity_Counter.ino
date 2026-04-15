#define TRIG 9
#define ECHO 10
#define led 11

long duration;
int distance;
int objectCount = 0;
bool objectDetected = false;

void setup() {
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  pinMode(led, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  digitalWrite(TRIG, LOW);
  delay(20);
  digitalWrite(TRIG, HIGH);
  delay(10);
  digitalWrite(TRIG, LOW);

  duration = pulseIn(ECHO, HIGH);
  distance = duration * 0.034 / 2;

  if (distance > 0 && distance < 15) {
    digitalWrite(led, HIGH);

    if (!objectDetected) {
      objectCount++;
      objectDetected = true;
      Serial.print("Object count: ");
      Serial.println(objectCount);
    }
  } else {
    digitalWrite(led, LOW);
    objectDetected = false;
  }

  delay(50);
}