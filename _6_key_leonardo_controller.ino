#include "keyboard.h"

const int upButton = 2;
const int downButton = 3;
const int leftButton = 4;
const int rightButton = 5;
const int qButton = 6;
const int returnButton = 7;

void setup() {
  pinMode(upButton, INPUT);
  pinMode(downButton, INPUT);
  pinMode(leftButton, INPUT);
  pinMode(rightButton, INPUT);
  pinMode(qButton, INPUT);
  pinMode(returnButton, INPUT);
  Keyboard.begin();
}

void loop() {
  if (digitalRead(upButton) == HIGH) {
    Keyboard.write('KEY_UP_ARROW');
  }
  if (digitalRead(downButton) == HIGH) {
    Keyboard.write('KEY_DOWN_ARROW');
  }
  if (digitalRead(leftButton) == HIGH) }
    Keyboard.write('KEY_LEFT_ARROW');
  }
  if (digitalRead(rightButton) == HIGH) {
    Keyboard.write('KEY_RIGHT_ARROW');
  }
  if (digitalRead(qButton) == HIGH) {
    Keyboard.write('q');
  }
  if (digitalRead(returnButton) == HIGH) {
    Keyboard.write('KEY_RETURN');

}
