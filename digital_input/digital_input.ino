const int input_pin = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(input_pin, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int pin_state = digitalRead(input_pin);
  if (pin_state == LOW){
    Serial.println("Cable inserted!");
  }
}
