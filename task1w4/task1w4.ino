const int button = 8;
const int led1 = 12;
const int led2 = 11;
const int led3 = 10;
const int led4 = 9;
void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(button, INPUT);

  // turn on internal pull-up
}
void loop() {
  while (digitalRead(button) == HIGH) {
    digitalWrite(led1, HIGH);
    delay(1000);
    digitalWrite(led1, LOW);

    if (digitalRead(button) == LOW) {
      digitalWrite(led2, HIGH);
      delay(1000);
      return 0;
    }
    digitalWrite(led2, HIGH);
    delay(1000);
    digitalWrite(led2, LOW);
    if (digitalRead(button) == LOW) {
      digitalWrite(led3, HIGH);
      delay(1000);
      return 0;
    }
    digitalWrite(led3, HIGH);
    delay(1000);
    digitalWrite(led3, LOW);
    if (digitalRead(button) == LOW) {
      digitalWrite(led4, HIGH);
      delay(1000);
      return 0;
    }
    digitalWrite(led4, HIGH);
    delay(1000);
    digitalWrite(led4, LOW);
    if (digitalRead(button) == LOW) {
      digitalWrite(led1, HIGH);
      delay(1000);
      return 0;
    }

  } while (digitalRead(button) == LOW) {
    
    delay(1000);
    

  }digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);

}
