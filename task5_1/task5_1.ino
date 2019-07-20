const int ldrPin = A0;
const int led1 = 7;
const int led2 = 6;
const int led3 = 5;
const int led4 = 4;
int val=0;
void setup(){
  pinMode (led1, OUTPUT);
  pinMode (led2, OUTPUT);
  pinMode (led3, OUTPUT);
  pinMode (led4, OUTPUT);
  Serial.begin(9600);
}
void loop(){
  if(analogRead(ldrPin) <=256){
    digitalWrite(led1, HIGH); 
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
  }if(analogRead(ldrPin) <=512 &&  analogRead(ldrPin)>256){
    digitalWrite(led1, HIGH); 
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, LOW);
  }if(analogRead(ldrPin) <=768 &&  analogRead(ldrPin)>512){
    digitalWrite(led1, HIGH); 
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
  }if(analogRead(ldrPin) <800 &&  analogRead(ldrPin)>768){
    digitalWrite(led1, HIGH);  
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
  }if(analogRead(ldrPin) >=800){
    digitalWrite(led1, LOW); 
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
  }Serial.println(analogRead(ldrPin));
}
