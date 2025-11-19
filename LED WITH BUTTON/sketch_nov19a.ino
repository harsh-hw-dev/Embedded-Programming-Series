const int buttonPin = 2;   // Button input pin
const int ledPin = 13;     // LED output pin

bool ledState = LOW;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP); // Button uses internal pull-up
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, ledState);   // LED initially OFF
}

void loop() {

   
  if (digitalRead(buttonPin) == LOW) {

    
    while (digitalRead(buttonPin) == LOW) {
  
    }
    ledState = !ledState;
    digitalWrite(ledPin, ledState);
  }
}
