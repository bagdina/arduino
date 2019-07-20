int n = 0;   // for incoming serial data

void setup() {
  Serial.begin(9600);     // opens serial port, sets data rate to 9600 bps
}

void loop() {
  if (Serial.available() > 0) {
    n = Serial.parseInt();
    int arr[n];
    for (int count = 0; count < n; count ++)
    {
      arr[count]=Serial.parseInt();
      
    } for (int i = 1; i < n; i++) {
    for (int j = 0; j < n - i; j++) {
      if (arr[j] >= arr[j + 1])
      {
        int t = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = t;
      }
    }
  }
    for (int count = 0; count < n; count ++)
    {
      Serial.print(arr[count]);
      Serial.print(", ");
      
    }
  }
}
