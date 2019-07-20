const int ldrPin = A0;
const int ledPin = 11;
const int ledPin2 = 9;
const int ledPin3 = 10;
void setup(){
  pinMode (ledPin, OUTPUT);
  pinMode (ledPin2, OUTPUT);
  pinMode (ledPin3, OUTPUT);
  Serial.begin(9600);
}
void loop(){
    analogWrite(ledPin, 255-analogRead(ldrPin)/4);
    analogWrite(ledPin2, 255-analogRead(ldrPin)/4);
    analogWrite(ledPin3, 255-analogRead(ldrPin)/4);
}
