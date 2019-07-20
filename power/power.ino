int c = 0;
int a = 0;
int b = 0;
void setup() {
  Serial.begin(9600);     // opens serial port, sets data rate to 9600 bps
}

void loop() {
  if (Serial.available()) {

    a = Serial.parseInt();
    b = Serial.parseInt();
    Serial.println(pow(a, b));
 
  }

}
