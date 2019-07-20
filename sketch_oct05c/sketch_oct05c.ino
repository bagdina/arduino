const int button = 13;
const int button1 = 8;
const int led1 = 8;
const int led2 = 11;
const int led3 = 10;
const int led4 = 9;
const int pin= A0;
int counter = -1;
int MAX_VALUE = 16;
int val;
void updateLED(int pin, int bit, int ctr) {
  digitalWrite(pin,  (ctr & (1 << bit)) == (1 << bit) ? HIGH : LOW);
}


void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(button, INPUT);
  pinMode(button1, INPUT);

  // turn on internal pull-up
}
void loop() {
val=analogRead(pin);
  while (digitalRead(button) == HIGH) {
    counter = (counter + 1) % MAX_VALUE;
    updateLED(8, 0, counter);
    updateLED(11, 1, counter);
    updateLED(10, 2, counter);
    updateLED(9, 3, counter);
    delay(500);
  }
  while (digitalRead(button1) == HIGH) {
    counter = (counter - 1) % MAX_VALUE;
    updateLED(8, 0, counter);
    updateLED(11, 1, counter);
    updateLED(10, 2, counter);
    updateLED(9, 3, counter);
    delay(500);
  }
 while (digitalRead(button1) == LOW && digitalRead(button) == LOW ) {
  delay(val);
 }
  
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);

}
