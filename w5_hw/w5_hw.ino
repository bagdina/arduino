const int led = 13;
const int Window = 2;
const int alarm = 0;
const int trig = 4;
const int echo = 3;
const int ldrPin = A0;
const int tempe = A1; 
const int vibra = A2;
int signalCurrentValue = 0;
int tiltSensorPreviousValue = 0;
int tiltSensorCurrentValue = 0;
int shakeTime = 1000;
long lastTimeMoved = 0;
const int THRESHOLD = 1;
const int movementThreshold = 20;
int previousReading = 0;
int currentReading = 0;
long value = 0;
int cm = 0;

void setup(){
  Serial.begin(9600);
  pinMode (Window, INPUT);
  digitalWrite (Window, HIGH);
  pinMode (alarm, INPUT);
  digitalWrite (alarm, LOW);
  pinMode(led, OUTPUT);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  digitalWrite(trig, LOW);
  previousReading = analogRead(ldrPin);
}
void loop(){
  //window open
  tiltSensorCurrentValue=digitalRead(Window);
  //segnalization
  signalCurrentValue=digitalRead(alarm);
  //vibration
  int val = analogRead(vibra); 
  //darkness
  currentReading = analogRead(ldrPin); 
  //temperature
  int value = analogRead(tempe); 
  float celsius = (value / 1024.0) * 500; 
  //sonar
  digitalWrite(trigPin, HIGH); 
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  value = pulseIn(echo, HIGH, 50000);
  cm = value / 58; // pulse width is 58 microseconds per cm
  
  if (tiltSensorPreviousValue != tiltSensorCurrentValue || signalCurrentValue != tiltSensorCurrentValue){
    lastTimeMoved = millis();
    tiltSensorPreviousValue = tiltSensorCurrentValue;
    signalCurrentValue = tiltSensorCurrentValue;
  }
  if (millis() - lastTimeMoved < shakeTime || abs(currentReading - previousReading) > movementThreshold || val >= THRESHOLD || celsius >= 37 || (cm >= 5 && cm <= 30)){
    previousReading = currentReading;
    digitalWrite(ledPin, HIGH);
    delay(200);
    digitalWrite(ledPin, LOW);
  } else{ 
    digitalWrite(ledPin, LOW);
  }


 
  
}
