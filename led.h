#ifndef LED_H
#define LED_H

#include <Arduino.h>

#define PIN_LED 13

void Led_Init();
void Led_On();
void Led_Off();
void Led_Toggle();

#endif