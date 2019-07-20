const int button = 8;
const int potPin = A0;
int val=0;

  boolean g=true; 

void setup() {
  Serial.begin(9600);
  pinMode(button, INPUT);

  // turn on internal pull-up
}
void loop() {
  val=analogRead(potPin);
  if(digitalRead(button)==HIGH && g){
    g=false;
    Serial.println(val);
    
  }if(digitalRead(button)==LOW && !g){
    g=true;
  }
}
