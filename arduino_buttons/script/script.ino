const int buttonPin2 = 2;
const int buttonPin3 = 3;
const int buttonPin4 = 4;

void setup() {
  Serial.begin(9600);

  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
  pinMode(buttonPin4, INPUT_PULLUP);

  Serial.println("Ready to detect button presses!");
}

void loop() {
  int buttonState2 = digitalRead(buttonPin2);
  int buttonState3 = digitalRead(buttonPin3);
  int buttonState4 = digitalRead(buttonPin4);

  if (buttonState2 == HIGH) {
    Serial.println("Button on pin 2 (pull-down) is pressed.");
  }

  if (buttonState3 == LOW) {
    Serial.println("Button on pin 3 (pull-up) is pressed.");
  }

  if (buttonState4 == LOW) {
    Serial.println("Button on pin 4 (INPUT_PULLUP) is pressed.");
  }

  delay(100);
}