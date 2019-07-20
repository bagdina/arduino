void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}
int a = 4;
int b = 3;
void loop() {
  if (a < b) {
    Serial.print("-1");
  } if (a = b) {
    Serial.print("0");
  } if (a > b) {
    Serial.print("1");
  }
  delay(1000);
}
