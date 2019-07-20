String n;
char h;// for incoming serial data
int c = 0;

void setup() {
  Serial.begin(9600);     // opens serial port, sets data rate to 9600 bps
}

void loop() {
  if (Serial.available() > 0) {
    n = Serial.readString();




    for (int i = 0; i < n.length(); i++) {
      h = (n.charAt(i));
      for (int j = 97; j < 123; j++) {
        if (h == j) {
          c = j;
        }
      }
      

    }Serial.print(c);
  }
}
