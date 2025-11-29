#include "buzzer.h"

void Buzzer_Init() {
  pinMode(PIN_BUZZER, OUTPUT);
}

void Buzzer_Beep() {
  tone(PIN_BUZZER, 1000, 50);
}

void Buzzer_Tone(int freq, int dura){
  tone(PIN_BUZZER, freq, dura);
}