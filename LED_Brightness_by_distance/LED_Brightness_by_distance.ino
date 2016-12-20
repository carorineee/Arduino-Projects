#define trigPin 13
#define echoPin 12
#define led 6
long duration, distance, y;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delay(2);
  digitalWrite(trigPin, HIGH);
  delay(2);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
  y = map(distance, 0, 50, 0, 255);
//  Serial.println(distance);
  if(y <= 5) {
      y = 0;
  }
  analogWrite(led, y);
  delay(2);
}
