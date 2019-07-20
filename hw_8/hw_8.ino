#include <Servo.h>

const int motor = 3;
const int ldr = A0; // LDR - light
const int ldr2 = A1; // LDR - light
int potPin = A2;    // select the input pin for the potentiometer
const int servo = 7;
const int stepperPins[4] = {2, 4, 5, 6};

const int pulsePeriod = 20000; //us
int angle = 0; // variable to store the servo position
int ldrVal = 0; // value from LDR (0 to 1023)
int ldrVal1 = 0; // value from LDR (0 to 1023)

void setup() {
  Serial.begin(9600);
  myservo.attach(servo);// attaches the servo on pin 9 to the servo object
  pinMode(servo, OUTPUT);
  for(int i=0; i<4; i++)
    pinMode(stepperPins[i], OUTPUT);
}
void loop() {
  
  //Light Value
  ldrVal = analogRead(ldr);
  ldrVal1 = analogRead(ldr2);

  val = analogRead(potPin);    // read the value from the sensor
  //Serial.print("LDR-value(light): "); Serial.println(ldrVal);

  //servo
  angle=ldrVal/6;
  myservo.write(angle); //tell servo to go to position in variable 'angle'
  //dc motor
  int speeed = ldrVal/5;
  analogWrite(motor, 0);//dc speed
  
  
  //stepper
  if(val<500){back(val);}
  else if(val>=500 && val<=600){back(0);}
  else{forw(val-500);}
  }
}

void forw(int steps) {
  for(int i=0;i<steps;i++){
    digitalWrite(stepperPins[0], HIGH);
    digitalWrite(stepperPins[1], LOW);
    digitalWrite(stepperPins[2], LOW);
    digitalWrite(stepperPins[3], LOW);
    delay(delayTime);
    digitalWrite(stepperPins[0], LOW);
    digitalWrite(stepperPins[1], HIGH);
    digitalWrite(stepperPins[2], LOW);
    digitalWrite(stepperPins[3], LOW);
    delay(delayTime);
    digitalWrite(stepperPins[0], LOW);
    digitalWrite(stepperPins[1], LOW);
    digitalWrite(stepperPins[2], HIGH);
    digitalWrite(stepperPins[3], LOW);
    delay(delayTime);
    digitalWrite(stepperPins[0], LOW);
    digitalWrite(stepperPins[1], LOW);
    digitalWrite(stepperPins[2], LOW);
    digitalWrite(stepperPins[3], HIGH);
    delay(delayTime);
    }
  }
  
void back(int steps) {
  for(int i=0;i<steps;i++){
    digitalWrite(stepperPins[0], LOW);
    digitalWrite(stepperPins[1], LOW);
    digitalWrite(stepperPins[2], LOW);
    digitalWrite(stepperPins[3], HIGH);
    delay(delayTime);
    digitalWrite(stepperPins[0], LOW);
    digitalWrite(stepperPins[1], LOW);
    digitalWrite(stepperPins[2], HIGH);
    digitalWrite(stepperPins[3], LOW);
    delay(delayTime);
    digitalWrite(stepperPins[0], LOW);
    digitalWrite(stepperPins[1], HIGH);
    digitalWrite(stepperPins[2], LOW);
    digitalWrite(stepperPins[3], LOW);
    delay(delayTime);
    digitalWrite(stepperPins[0], HIGH);
    digitalWrite(stepperPins[1], LOW);
    digitalWrite(stepperPins[2], LOW);
    digitalWrite(stepperPins[3], LOW);
    delay(delayTime);
    }
