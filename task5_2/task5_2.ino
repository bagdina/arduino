const int tempPin = A0;
const int led1 = 7;
const int led2 = 6;
const int led3 = 5;
const int led4 = 4;
const int led5 = 3;
const int led6 = 2;
int val = 0;
void setup() {
  pinMode (led1, OUTPUT);
  pinMode (led2, OUTPUT);
  pinMode (led3, OUTPUT);
  pinMode (led4, OUTPUT);
  pinMode (led5, OUTPUT);
  pinMode (led6, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  val = analogRead(tempPin);
  int g = val;
  if (g >= 32) {
    digitalWrite(led1, HIGH);
    g = g - 32;
  } if (g >= 16 && g < 32) {
    digitalWrite(led2, HIGH);
    g = g - 16;
  } if (g >= 8 && g < 16) {
    digitalWrite(led3, HIGH);
    g = g - 8;
  }
  if (g >= 4 && g < 8) {
    digitalWrite(led4, HIGH);
    g = g - 4;
  }
  if (g >= 2 && g < 4) {
    digitalWrite(led5, HIGH);
    g = g - 2;
  } if (g == 1) {
    digitalWrite(led6, HIGH);
    g = g - 1;
  }

  Serial.println(val);
  delay(10000);
  digitalWrite(led6, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led1, LOW);
}
