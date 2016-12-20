int ledPin = 6;
int potPin = A0;
int reading = 0;
int y = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  reading = analogRead(potPin);
  y = map(reading, 0, 1023, 0, 255);
  analogWrite(ledPin, y);
  delay(200);
}
