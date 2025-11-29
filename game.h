#ifndef GAME_H
#define GAME_H

#include <Arduino.h>

typedef struct{
  float x, y;
  int width;
  int height;
  int speed;
} Paddle_t;

typedef struct{
  float x, y;
  float vx, vy;
  int rad;
} Ball_t;

void Game_Init();

void Game_Update();

#endif