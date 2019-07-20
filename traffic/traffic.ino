void setup() {
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(13, OUTPUT);

}

void loop() {
  for(int i=0;i<3;i++){
    digitalWrite(12,HIGH);
    delay(5000);
    digitalWrite(12,LOW);
    digitalWrite(11,HIGH);
    delay(1000);
    digitalWrite(11,LOW);
    digitalWrite(13,HIGH);
    delay(4000);
    digitalWrite(13,LOW);
    for(int j=0;j<4;j++){
      delay(50);
      digitalWrite(13,HIGH);
      delay(200);
      digitalWrite(13,LOW);
    }digitalWrite(11,HIGH);
    delay(5000);
    digitalWrite(11,LOW);}
}
