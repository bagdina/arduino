byte b[] = {
B01111110,
B01000010,
B01000010,
B01111100,
B01000010,
B01000010,
B01111110,
B00000000};
byte a[] = {
B00010000,
B00101000,
B01000100,
B11111110,
B10000010,
B10000010,
B10000010,
B00000000};
byte k[] = {
B01000001,
B01000010,
B01000100,
B01110000,
B01001000,
B01000100,
B01000010,
B00000000};
byte d[] = {
B01111100,
B01000010,
B01000010,
B01000010,
B01000010,
B01000010,
B01111100,
B00000000};
byte i[] = {
B01111111,
B00001000,
B00001000,
B00001000,
B00001000,
B00001000,
B01111111,
B00000000};
byte n[] = {
B10000010,
B11000010,
B10100010,
B10010010,
B10001010,
B10000110,
B10000010,
B00000000};

void setup() {
  for (int i = 0; i < 8; i++){
    pinMode(rowPins[i], OUTPUT); // make all the LED pins outputs
    pinMode(columnPins[i], OUTPUT);
    digitalWrite(columnPins[i], HIGH); // disconnect column pins
  }
}
void loop() {
  show(smallHeart, 800); // show the small heart image for 100 ms
  show(bigHeart, 800); // followed by the big heart for 200ms
  delay(400); // show nothing between beats
}
void show( byte * image, unsigned long duration){
  unsigned long start = millis(); // begin timing the animation
  while (start + duration > millis()){ // loop until duration passed
    for(int row = 0; row < 8; row++){
      digitalWrite(rowPins[row], HIGH); // connect row to +5 volts
      for(int column = 0; column < 8; column++){
        boolean pixel = bitRead(image[row],column);
        if(pixel == 1) digitalWrite(columnPins[column], LOW);
        delayMicroseconds(300); // a small delay for each LED
        digitalWrite(columnPins[column], HIGH); 
      }
      digitalWrite(rowPins[row], LOW); // disconnect LEDs
    }
  }
}

}
