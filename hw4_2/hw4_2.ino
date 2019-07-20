const int red = 11;
const int green = 10;
const int button1 = 2;
const int button2 = 3;
const int button3 = 4;
const int check = 8;
boolean c = false;
boolean c1 = false;
boolean c2 = false;
String password = "132";
String p = "111";
char b1;
char b2;
char b3;
char f [3] = "";
boolean m = false;
boolean m1 = false;
boolean m2 = false;
void setup() {
  Serial.begin(9600);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);
  pinMode(check, INPUT);
}

void loop() {
  for (int i = 0; i < 3; i++) {
    for (int j = 2; j < 5; j++) {
      if (digitalRead(j) == HIGH) {
        f[i] = String(j).charAt(0);
        delay(2000);
      }
    }
  }
  if (digitalRead(check) == HIGH) {
    String str(f);
    //Serial.println(str);
    if (password.charAt(0) == str.charAt(0)) {
      c = true;
    } else {
      c = false;
    }
    if (password.charAt(1) == str.charAt(1)) {
      c1 = true;
    } else {
      c1 = false;
    }
    if (password.charAt(2) == str.charAt(2)) {
      c2 = true;
    } else {
      c2 = false;
    }

  }

  if (c && c1 && c2) {
    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
  } else {
    digitalWrite(red, HIGH);
  }
  /*for (int i = 0; i < 3; i++) {
    Serial.println(f[i]);
    delay(1000);
    }*/


}
