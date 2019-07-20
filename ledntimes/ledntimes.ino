void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
   pinMode(13,OUTPUT);
}
int a;
void loop() {
  a=Serial.parseInt();
  for(int i=0;i<a;i++){
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
  }

}
