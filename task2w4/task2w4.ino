const int button = 13;
const int button1 = 8;
const int led1 = 12;
const int led2 = 11;
const int led3 = 10;
const int led4 = 9;
int counter = -1;
int MAX_VALUE = 16;

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

  while (digitalRead(button) == HIGH) {
    counter = (counter + 1) % MAX_VALUE;
    updateLED(12, 0, counter);
    updateLED(11, 1, counter);
    updateLED(10, 2, counter);
    updateLED(9, 3, counter);
    delay(500);
  }
  while (digitalRead(button1) == HIGH) {
    counter = (counter - 1) % MAX_VALUE;
    updateLED(12, 0, counter);
    updateLED(11, 1, counter);
    updateLED(10, 2, counter);
    updateLED(9, 3, counter);
    delay(500);
  }
 while (digitalRead(button1) == LOW && digitalRead(button) == LOW ) {
  delay(1000);
 }
  
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);

}
