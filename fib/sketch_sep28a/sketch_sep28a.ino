int incomingByte = 0;   // for incoming serial data

void setup() {
  Serial.begin(9600);     // opens serial port, sets data rate to 9600 bps
}

void loop() {
  if (Serial.available() > 0) {
    incomingByte = Serial.parseInt();
    int n1 = 1, n2 = 1, n3;


    for (int i = 2; i < incomingByte; ++i)
    {
      n3 = n1 + n2;
      n1 = n2;
      n2 = n3;
    }
    Serial.println(n3);
  }
}
