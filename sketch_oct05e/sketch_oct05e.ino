const int button = 10;
const int button1 = 11;
int y = 0;
boolean g = true;
void setup() {

  Serial.begin(9600);
y = Serial.parseInt();
}

void loop() {
  
    

    if (digitalRead(button) == HIGH && g) {
      g = false;
      Serial.println(y + 1);
      y = y + 1;
      delay(1000);

    } if (digitalRead(button) == LOW && !g) {
      g = true;
    } if (digitalRead(button1) == HIGH && g) {
      g = false;
      Serial.println(y - 1);
      y = y - 1;
      delay(1000); 

    } if (digitalRead(button1) == LOW && !g) {
      g = true;
    }
  

}
