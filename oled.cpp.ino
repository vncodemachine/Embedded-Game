#include <Adafruit_GFX.h>       
#include <Adafruit_SSD1306.h> 
#include "game.h"  

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64 

#define OLED_RESET -1 

#define SCREEN_ADDRESS 0x3C 

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET); 

void setup() {
  Serial.begin(9600); 


  if(!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;); 
  }

  display.clearDisplay(); 

  display.setTextSize(1);     
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);     
  display.println("Hello, Arduino!");

  Game_Init();

  display.display(); 

  
}

void loop() {

  display.clearDisplay();
  

  // 2. Đặt con trỏ và in nội dung mới
  display.fillRect(paddle.x, paddle.y, paddle.width, paddle.height, SSD1306_WHITE);
  display.fillCircle(ball.x, ball.y, ball.rad, SSD1306_WHITE);
  Game_Update();

  // 3. Hiển thị buffer ra màn hình (Bắt buộc)
  display.display();
  
  delay(100); 
}


