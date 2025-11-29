#include "led.h"

bool ledState = false;

void Led_Init(){
  pinMode(PIN_LED, OUTPUT);
  Led_Off();
}

void Led_On(){
  digitalWrite(PIN_LED, HIGH);
  ledState = true;
}

void Led_Off(){
  digitalWrite(PIN_LED, LOW);
  ledState = false;
}

void Led_Toggle(){
  ledState = !ledState;

  if(ledState) {
    Led_On();
  }
  else {
    Led_Off();
  }
}