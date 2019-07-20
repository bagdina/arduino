char s1[4] = "hoop";
char s2[5] = "hguoop";

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(stringcmp(s1, s2));
  delay(3000);
}
int stringcmp(char * s1, char * s2) {

  if (strcmp(s1, s2) == 0)
    Serial.print("egual");
  else {
    Serial.print("not equal");
  }


}
