const int ledPin = 8; // choose the pin for the LED
const int ledPin1 = 9; // choose the pin for the LED
const int ledPin2 = 10; // choose the pin for the LED
const int ledPin3 = 11; // choose the pin for the LED
int count = 0;
int last = 0;
int start = 0;
int endt = 0;
int interval = 0;
const int inputPin = 2; // choose the input pin (for a pushbutton)
int delval = 500;
int val = 0;
int c = 0;
int ledPins[] = {ledPin, ledPin1, ledPin2, ledPin3};
void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT); // declare LED as output
  pinMode(ledPin1, OUTPUT); // declare LED as output
  pinMode(ledPin2, OUTPUT); // declare LED as output
  pinMode(ledPin3, OUTPUT); // declare LED as output
  pinMode(inputPin, INPUT); // declare pushbutton as input
}
void loop() {
  val = digitalRead(inputPin);
  if (val != last) {
    if (val == HIGH) {
      start = millis();
      if (interval <= 1000) {
        delval = 500;
      }
      if (interval > 1000 && interval <= 3000) {
        delval = 250;
      }
      if (interval > 3000) {
        delval = 125;
      }

      // the button was just released
    } else {
      endt = millis();
      interval = endt - start;

      if (interval <= 1000) {
        delval = 500;
      }
      if (interval > 1000 && interval <= 3000) {
        delval = 250;
      }
      if (interval > 3000) {
        delval = 125;
      }
    }
  }
  last = val;
  if (count < 4) {
    digitalWrite(ledPins[count], HIGH);
    delay(delval);
    digitalWrite(ledPins[count], LOW);
    count++;
  }
  else {
    for (int i = 2; i >= 0; i--) {
      digitalWrite(ledPins[i], HIGH);
      delay(delval);
      digitalWrite(ledPins[i], LOW);
    }
    count = 0;
  }
}
