#include "game.h"
//#include "oled.h"
#include "button.h"
#include "buzzer.h"

Paddle_t paddle;
Ball_t ball;

void Game_Init(){
  paddle.width = 24;
  paddle.height = 3;
  paddle.x = (SCREEN_W - paddle.width) / 2;
  paddle.y = (SCREEN_H - 5);
  paddle.speed = 3;

  ball.rad = 2;
  ball.x = SCREEN_W / 2;
  ball.y = SCREEN_H / 2;
  ball.vx = 1.5;
  ball.vy = -1.5;
}

void Game_Update(){
  //paddle
  {
    if(Button_IsLeftPressed()) {
      paddle.x -= paddle.speed;
    }

    if(Button_IsRightPressed()) {
      paddle.x += paddle.speed;
    }

    if(paddle.x < 0) paddle.x = 0;
    if(paddle.x > SCREEN_W - paddle.width) paddle.x = SCREEN_W - paddle.width;
  }

  //ball
  {
    ball.x += ball.vx;
    ball.y += ball.vy;

    if(ball.x <= 0 || ball.x >= SCREEN_W) {
      ball.vx = -ball.vx;
      Buzzer_Beep();
    }

    if(ball.y <= 0 || ball.y >= SCREEN_H) {
      ball.vy = -ball.vy;
    }
  }

}







