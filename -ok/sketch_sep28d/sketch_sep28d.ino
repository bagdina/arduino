String a;
void setup() {
  Serial.begin(9600);
}
void loop() {
  if (Serial.available()) {
    a= Serial.readString();
    Serial.print(a+"OK");
  }
    
}
