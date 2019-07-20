int val=0;
const int potPin = A0; // select the input pin for the potentiometer
  // variable to store the value coming from the sensor
int leds[]={9,10,11,12,13};
void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);// declare the ledPin as an OUTPUT
}
void loop() {
  val=analogRead(potPin);
  for(int i=1;i<6;i++){
    if(i*204>val){
      digitalWrite(leds[i-1],HIGH);
    }else{
      digitalWrite(leds[i-1],LOW);
    }
  }
}
