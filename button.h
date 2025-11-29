#ifndef BUTTON_H
#define BUTTON_H

#include <Arduino.h>

#define PIN_BTN_LEFT 2
#define PIN_BTN_RIGHT 3
#define PIN_BTN_H 4

void Button_Init();

bool Button_IsLeftPressed();
bool Button_IsRightPressed();

#endif
