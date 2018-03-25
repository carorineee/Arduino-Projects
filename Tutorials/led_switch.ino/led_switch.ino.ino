const int ledPin = 13;
const int inPin = 8;
boolean lastButton = LOW;
boolean ledOn = false;
boolean currentButton = LOW;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(inPin, INPUT);
}

boolean debounce(boolean last) {
  boolean current = digitalRead(inPin);
  if (last != current) {
    // Enough time to debounce but not for finger to remove
    delay(5);  
    current = digitalRead(inPin);
  }  

  return current;
}

void loop() {
  // put your main code here, to run repeatedly:
  currentButton = debounce(lastButton);
  if (lastButton == LOW && currentButton == HIGH) 
  {
    ledOn = !ledOn;
  }

  lastButton = currentButton;
  digitalWrite(ledPin, ledOn);
}
