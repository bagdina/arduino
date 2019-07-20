// for incoming serial data

void setup() {
  Serial.begin(9600);     // opens serial port, sets data rate to 9600 bps
}

void loop() {


  int arr[5] = {10, 5, 0, 1, 9};
  for (int i = 1; i < 5; i++) {
    for (int j = 0; j < 5 - i; j++) {
      if (arr[j] >= arr[j + 1])
      {
        int t = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = t;
      }
    }
  }


  Serial.println(arr[0]);
  Serial.println(arr[4]);

  delay(3000);

}
