void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
String txt1="Bakdina19awdgaj78875";
char num[10]={'0','1','2','3','4','5','6','7','9','8'};
String txt2;
int c=0;
int l=0;
  for(int i=0;i<txt1.length();i++){
    for(int j=0;j<10;j++){
    if(txt1.charAt(i)==num[j]){
      
      Serial.print(num[j]);
      
      
      }}
  
    delay(50);
}}
