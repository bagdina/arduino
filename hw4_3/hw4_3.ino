int sensorPin = A0;
int sensorVal = 0;
int numPins = 5;
const int ledPin = 7; 
const int ledPin1 = 8; 
const int ledPin2 = 9; 
const int ledPin3 = 10; // choose the pin for the LED
const int ledPin4 = 11;  
int a,b,c,d,e;
int ledPins[] = {7, 8, 9, 10, 11}; 

void setup() {
    Serial.begin(9600);
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
}
void loop() {
   sensorVal = analogRead(sensorPin);
   sensorVal /= 32; 
   Serial.println(sensorVal);
   int i = 0;
   int a=sensorVal%2;       
   int b=sensorVal/2 %2;     
   int c=sensorVal/4 %2;    
   int d=sensorVal/8 %2;    
   int e=sensorVal/16 %2;    
   digitalWrite(ledPin4,e); 
   digitalWrite(ledPin3,d); 
   digitalWrite(ledPin2,c);   
   digitalWrite(ledPin1,b);    
   digitalWrite(ledPin,a);  
  
}
