#include <Bonezegei_WS2812.h>

#define LED_COUNT 8
Bonezegei_WS2812 rgb(18, LED_COUNT);



void setup() {
  Serial.begin(115200);  // 启动串口通讯
  rgb.begin();
}

void loop() {   
  int sensorValue = analogRead(4);


  //Serial.println(analogRead(4)); // 输出LDR读数 
  
  // emo1
  if (0 <= sensorValue && sensorValue < 65) {
    Serial.println("1");
      rgb.fill(0xFFFFFF);  //白色
  }
  // emo 2
  else if (65 <= sensorValue && sensorValue < 129) {
    Serial.println("2");

   rgb.setPixel(1, 0xFFFFFF);  //白色
   rgb.setPixel(2, 0x0);
   rgb.setPixel(3, 0xFFFFFF);  //白色
   rgb.setPixel(0, 0xFFFFFF);
   rgb.setPixel(4, 0xFFFFFF);  //白色
   rgb.setPixel(5, 0xFFFFFF);  //白色
   rgb.setPixel(6, 0xFFFFFF);  //白色
   rgb.setPixel(7, 0xFFFFFF);  //白色

  }
  // emo 3
  else if (129 <= sensorValue && sensorValue < 193) {
    Serial.println("3");
   rgb.setPixel(1, 0x0);  //白色
   rgb.setPixel(2, 0x0);
   rgb.setPixel(3, 0xFFFFFF);  //白色
   rgb.setPixel(0, 0xFFFFFF);
   rgb.setPixel(4, 0xFFFFFF);  //白色
   rgb.setPixel(5, 0xFFFFFF);  //白色
   rgb.setPixel(6, 0xFFFFFF);  //白色
   rgb.setPixel(7, 0xFFFFFF);  //白色
  }
  // emo 4
  else if (193 <= sensorValue && sensorValue < 257) {
    Serial.println("4");

   rgb.setPixel(1, 0x0);  //白色
   rgb.setPixel(2, 0x0);
   rgb.setPixel(3, 0x0);  //白色
   rgb.setPixel(0, 0xFFFFFF);
   rgb.setPixel(4, 0xFFFFFF);  //白色
   rgb.setPixel(5, 0xFFFFFF);  //白色
   rgb.setPixel(6, 0xFFFFFF);  //白色
   rgb.setPixel(7, 0xFFFFFF);  //白色
  }
  // emo 5
  else if (257 <= sensorValue && sensorValue < 321) {
    Serial.println("5");
   rgb.setPixel(1, 0x0);  //白色
   rgb.setPixel(2, 0x0);
   rgb.setPixel(3, 0x0);  //白色
   rgb.setPixel(0, 0x0);
   rgb.setPixel(4, 0xFFFFFF);  //白色
   rgb.setPixel(5, 0xFFFFFF);  //白色
   rgb.setPixel(6, 0xFFFFFF);  //白色
   rgb.setPixel(7, 0xFFFFFF);  //白色
  }
  // emo 6
  else if (321 <= sensorValue && sensorValue < 385) {
    Serial.println("6");

       rgb.setPixel(1, 0x0);  //白色
   rgb.setPixel(2, 0x0);
   rgb.setPixel(3, 0x0);  //白色
   rgb.setPixel(0, 0x0);
   rgb.setPixel(4, 0x0);  //白色
   rgb.setPixel(5, 0xFFFFFF);  //白色
   rgb.setPixel(6, 0xFFFFFF);  //白色
   rgb.setPixel(7, 0xFFFFFF);  //白色
  }
  // emo 7
  else if (385 <= sensorValue && sensorValue < 449) {
    Serial.println("7");
       rgb.setPixel(1, 0x0);  //白色
   rgb.setPixel(2, 0x0);
   rgb.setPixel(3, 0x0);  //白色
   rgb.setPixel(0, 0x0);
   rgb.setPixel(4, 0x0);  //白色
   rgb.setPixel(5, 0xFFFFFF);  //白色
   rgb.setPixel(6, 0xFFFFFF);  //白色
   rgb.setPixel(7, 0xFFFFFF);  //白色
    
  }
  // emo 8
  else if (449 <= sensorValue && sensorValue < 513) {
    Serial.println("8");
           rgb.setPixel(1, 0x0);  //白色
   rgb.setPixel(2, 0x0);
   rgb.setPixel(3, 0x0);  //白色
   rgb.setPixel(0, 0x0);
   rgb.setPixel(4, 0x0);  //白色
   rgb.setPixel(5, 0xFFFFFF);  //白色
   rgb.setPixel(6, 0xFFFFFF);  //白色
   rgb.setPixel(7, 0xFFFFFF);  //白色
  }
  // emo 9
  else if (513 <= sensorValue && sensorValue < 577) {
    Serial.println("9");
           rgb.setPixel(1, 0x0);  //白色
   rgb.setPixel(2, 0x0);
   rgb.setPixel(3, 0x0);  //白色
   rgb.setPixel(0, 0x0);
   rgb.setPixel(4, 0x0);  //白色
   rgb.setPixel(5, 0x0);  //白色
   rgb.setPixel(6, 0xFFFFFF);  //白色
   rgb.setPixel(7, 0xFFFFFF);  //白色
  }
  // emo 10
  else if (577 <= sensorValue && sensorValue < 641) {
    Serial.println("10");
               rgb.setPixel(1, 0x0);  //白色
   rgb.setPixel(2, 0x0);
   rgb.setPixel(3, 0x0);  //白色
   rgb.setPixel(0, 0x0);
   rgb.setPixel(4, 0x0);  //白色
   rgb.setPixel(5, 0x0);  //白色
   rgb.setPixel(6, 0xFFFFFF);  //白色
   rgb.setPixel(7, 0xFFFFFF);  //白色
  }
  // emo 11
  else if (641 <= sensorValue && sensorValue < 705) {
    Serial.println("11");
               rgb.setPixel(1, 0x0);  //白色
   rgb.setPixel(2, 0x0);
   rgb.setPixel(3, 0x0);  //白色
   rgb.setPixel(0, 0x0);
   rgb.setPixel(4, 0x0);  //白色
   rgb.setPixel(5, 0x0);  //白色
   rgb.setPixel(6, 0xFFFFFF);  //白色
   rgb.setPixel(7, 0xFFFFFF);  //白色
  }
  // emo 12
  else if (705 <= sensorValue && sensorValue < 769) {
    Serial.println("12");
               rgb.setPixel(1, 0x0);  //白色
   rgb.setPixel(2, 0x0);
   rgb.setPixel(3, 0x0);  //白色
   rgb.setPixel(0, 0x0);
   rgb.setPixel(4, 0x0);  //白色
   rgb.setPixel(5, 0x0);  //白色
   rgb.setPixel(6, 0x0);  //白色
   rgb.setPixel(7, 0xFFFFFF);  //白色
  }
  // emo 13 
  else if (769 <= sensorValue && sensorValue < 833) {
    Serial.println("13");
                   rgb.setPixel(1, 0x0);  //白色
   rgb.setPixel(2, 0x0);
   rgb.setPixel(3, 0x0);  //白色
   rgb.setPixel(0, 0x0);
   rgb.setPixel(4, 0x0);  //白色
   rgb.setPixel(5, 0x0);  //白色
   rgb.setPixel(6, 0x0);  //白色
   rgb.setPixel(7, 0xFFFFFF);  //白色
  }
  // emo 14 
  else if (833 <= sensorValue && sensorValue < 897) {
    Serial.println("14");
                   rgb.setPixel(1, 0x0);  //白色
   rgb.setPixel(2, 0x0);
   rgb.setPixel(3, 0x0);  //白色
   rgb.setPixel(0, 0x0);
   rgb.setPixel(4, 0x0);  //白色
   rgb.setPixel(5, 0x0);  //白色
   rgb.setPixel(6, 0x0);  //白色
   rgb.setPixel(7, 0xFFFFFF);  //白色
  }
  // emo 15 
  else if (897 <= sensorValue && sensorValue < 961) {
    Serial.println("15");
                   rgb.setPixel(1, 0x0);  //白色
   rgb.setPixel(2, 0x0);
   rgb.setPixel(3, 0x0);  //白色
   rgb.setPixel(0, 0x0);
   rgb.setPixel(4, 0x0);  //白色
   rgb.setPixel(5, 0x0);  //白色
   rgb.setPixel(6, 0x0);  //白色
   rgb.setPixel(7, 0x0);  //白色
  }
  // emo 16 angry
  else if (sensorValue >= 961) {
    Serial.println("16");
                   rgb.setPixel(1, 0x0);  //白色
   rgb.setPixel(2, 0x0);
   rgb.setPixel(3, 0x0);  //白色
   rgb.setPixel(0, 0x0);
   rgb.setPixel(4, 0x0);  //白色
   rgb.setPixel(5, 0x0);  //白色
   rgb.setPixel(6, 0x0);  //白色
   rgb.setPixel(7, 0x0);  //白色
  }
  else {
    Serial.println("17");
  rgb.setPixel(1, 0x0);  //白色
   rgb.setPixel(2, 0x0);
   rgb.setPixel(3, 0x0);  //白色
   rgb.setPixel(0, 0xFFFFFF);
   rgb.setPixel(4, 0xFFFFFF);  //白色
   rgb.setPixel(5, 0xFFFFFF);  //白色
   rgb.setPixel(6, 0xFFFFFF);  //白色
   rgb.setPixel(7, 0xFFFFFF);  //白色
  }
  
  delay(100);
}
