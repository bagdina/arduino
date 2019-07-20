String a = "lalala";
String b = "9";

void setup() {
  Serial.begin(9600);

}

void loop() {
  for (int i = 0; i < b.toInt(); i++) {
    Serial.println(a);
    
  }delay(4000);
}
