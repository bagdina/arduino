/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(13, OUTPUT);
  
}
int arr[8]={0,1,2,3,4,5,6,7};

// the loop function runs over and over again forever
void loop() {
  for(int i=0;i<8;i++){
    if(arr[i] % 2==1){
      digitalWrite(11,HIGH);
      }
    if(arr[i] % 4==2 || arr[i] % 4==3){
      digitalWrite(12,HIGH);
      }
    if(arr[i] >=4){
      digitalWrite(13,HIGH);
     }
      delay(1000); 
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
  }}
    
    
    
  
    
  
  
  
