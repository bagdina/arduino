int leds[] = {3,5,6};
#define pot A0
int red=3;
int blue = 5;
int green = 6;

int val = 0;

void setup() {
  Serial.begin (9600);
  for(int i = 0; i<3; i++) pinMode(leds[i], OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {
  Serial.println(analogRead(pot));
  if(analogRead(pot) < 300) change(255,0,0);
  if(analogRead(pot)>300 && analogRead(pot) < 700)change(0,255,0);
  if(analogRead(pot)>700)change(0,0,255);
  
}

void change(int red1, int blue1, int green1){
  analogWrite(red, 255-red1);
  analogWrite(blue, 255-blue1);
  analogWrite(green, 255-green1);
}
