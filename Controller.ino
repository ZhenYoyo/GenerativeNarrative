void setup() {
  Serial.begin(115200);  //启动串口通讯
}
 
void loop() {   
  //Serial.print("LDR Reading: ");  //通过串口监视器
  int sensorValue = analogRead(4);
 // Serial.println(analogRead(4)); //输出LDR读数 
  
 if ((0 <= sensorValue) && (sensorValue < 200)) {
    Serial.println("1");
  }
  else if ((200 <= sensorValue) && (sensorValue < 500)) {
    Serial.println("2");
  }
  else if ((500 <= sensorValue) && (sensorValue < 800)) {
    Serial.println("3");
  }
  else if ((800 <= sensorValue) && (sensorValue < 1000)) {
    Serial.println("4");
  }
  else if (sensorValue >= 1000) {
    Serial.println("5");
  }
  else{
    Serial.println("6");
  }
  delay(500);    
}
