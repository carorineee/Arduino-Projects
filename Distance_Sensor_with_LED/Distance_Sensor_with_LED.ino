#define trigPin 13
#define echoPin 12
#define led 6
#define led2 7
long duration;
long distance;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delay(2);
  digitalWrite(trigPin, HIGH);
  delay(2);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
  if(distance <= 30) {
      digitalWrite(led, HIGH);
      digitalWrite(led2, LOW);
    } else if(distance > 30 && distance <= 60) {
       digitalWrite(led2, HIGH);
       digitalWrite(led, LOW);
      } else {
        digitalWrite(led, LOW);
        digitalWrite(led2, LOW);
        }
  delay(2);
   
//  Serial.println(duration);
}
