const int ledPin = 11;
const int inPin = 8;
boolean lastButton = LOW;
int ledLevel = 0;
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
    ledLevel += 51;
  }

  lastButton = currentButton;

  if(ledLevel > 255) ledLevel = 0;
  analogWrite(ledPin, ledLevel);
}
