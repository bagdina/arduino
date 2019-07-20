#include <SoftwareSerial.h>
String SSID = "Olzhan";
String PASS = "29011999";
SoftwareSerial wifiSerial(6,5); // RX, TX
void setup()
{
  // Open serial communications and wait for port to open:
  Serial.begin(115200);
  Serial.println("ESP8266 Demo");
  wifiSerial.begin(115200);  
  wifiSerial.setTimeout(5000);
  delay(1000);
  //test if the module is ready
  wifiSerial.println("AT+RST");
  String responce = "";
  for(int i=0; i<100; i++){
    while(wifiSerial.available()){responce += (char)wifiSerial.read();}
    delay(10);
  }
  if(responce.indexOf("OK")>=0){
    Serial.println("Module is Ready!");
  }else{
    Serial.println("Module have no response.");
    while (1);
  }
  delay(1000);
  //connect to the wifi
  boolean connected = false;
  for (int i = 0; i < 5; i++){
    if (connectWiFi()){
      connected = true;
      break;
    }
  }
  if (!connected) {
    Serial.println("Error connecting to WIFI!");
    while (1);
  }
  delay(3000);
  wifiSerial.println("AT+CWDHCP=1,1");
  delay(2000);
  wifiSerial.println("AT+CIFSR");
  delay(1000);
  //print the ip addr
  Serial.println("ip address:");
  for(int i=0; i < 100; i++){
    while (wifiSerial.available()){Serial.write(wifiSerial.read());}
    delay(10);
  }
  //set the single connection mode
  wifiSerial.println("AT+CIPMUX=0");
  delay(1000);
  wifiSerial.println("AT+CWDHCP=1,1");
  delay(2000);
  wifiSerial.println("AT+CIFSR");
  delay(1000);
  wifiSerial.println("AT+CIPMUX=1");
  delay(1000);
  wifiSerial.println("AT+CIPSERVER=1,2222");
  delay(1000);
}
void loop(){
  if(wifiSerial.available()){
      String c = wifiSerial.readString();
      Serial.println(c);
  }
}
boolean connectWiFi(){
  wifiSerial.println("AT+CWMODE=1");
  delay(100);
  String cmd = "AT+CWJAP=\"";
  cmd += SSID;
  cmd += "\",\"";
  cmd += PASS;
  cmd += "\"";
  Serial.println(cmd);
  wifiSerial.println(cmd);
  delay(3000);
  if (wifiSerial.find("OK")){
    Serial.println("OK, Connected to WiFi.");
    return true;
  } else{
    Serial.println("Can not connect to the WiFi.");
    return false;
  }
}
