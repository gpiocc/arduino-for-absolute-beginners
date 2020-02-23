const int ledPin = 13;
const int wire_input = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(wire_input, INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:
  int wireState = digitalRead(wire_input);
  
  if (wireState == LOW){ // The wire is connected to GND
    digitalWrite(ledPin, HIGH);
  } else{
    digitalWrite(ledPin, LOW);
  }
}
