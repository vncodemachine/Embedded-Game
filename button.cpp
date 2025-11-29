#include "button.h"

void Button_Init(){
  //INPUT_PULLUP: điện trở kéo lên nội bộ của Arduino
  //Normal state: HIGH(5V)
  //Pressed state: LOW(0V)

  pinMode(PIN_BTN_LEFT, INPUT_PULLUP);
  pinMode(PIN_BTN_RIGHT, INPUT_PULLUP);

}

bool Button_IsLeftPressed(){
  return digitalRead(PIN_BTN_LEFT) == LOW;
}

bool Button_IsRightPressed(){
  return digitalRead(PIN_BTN_RIGHT) == LOW;
}