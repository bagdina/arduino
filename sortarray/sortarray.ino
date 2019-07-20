const int button = 13; 
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
  digitalWrite(button,LOW); 
  // turn on internal pull-up
}
void loop(){
  int val = digitalRead(button);
  if (val == HIGH) {
    digitalWrite(led1, HIGH);
    delay(1000);
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    delay(1000);
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);
    delay(1000);
    digitalWrite(led3, LOW);
    digitalWrite(led4, HIGH);
    delay(1000);
    digitalWrite(led4, LOW);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
