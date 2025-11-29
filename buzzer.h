#ifndef BUZZER_H
#define BUZZER_H

#include <Arduino.h>

#define PIN_BUZZER 8

void Buzzer_Init();
void Buzzer_Beep();
void Buzzer_Tone(int freq, int dura);

#endif