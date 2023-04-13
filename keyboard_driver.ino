#include <Keyboard.h>

// Constants
const unsigned long debounceDelay = 50000;

// Structure for Button
struct Button {
  int pin;
  char key;
  bool pressed;
  unsigned long lastRead;
};

// Button instances
Button buttons[] = {
  {2, '7', false, 0},
  {3, '8', false, 0},
  {4, '9', false, 0},
  {5, 'L', false, 0},
  {6, '4', false, 0},
  {7, '5', false, 0},
  {8, '6', false, 0},
  {9, 'G', false, 0},
  {10, '1', false, 0},
  {11, '2', false, 0},
  {12, '3', false, 0},
  {A0, 'O', false, 0},
  {A1, 'W', false, 0},
  {A2, '0', false, 0},
  {A3, '.', false, 0},
  {A5, 'E', false, 0}
};

//SETUP
void setup() {
  Serial.begin(115200);
  delay(2000);
  Serial.println("Sheldor ist wieder online");

  for (Button &button : buttons) {
    pinMode(button.pin, INPUT_PULLUP);
  }

  Keyboard.begin();
}

// TIME_PASSED
bool time_passed(unsigned long pre, unsigned long next, unsigned long threshold) {
  return (next - pre) >= threshold;
}

// UPDATE_BUTTON
void updateButton(Button &button) {
  if (digitalRead(button.pin) == HIGH && button.pressed && time_passed(button.lastRead, micros(), debounceDelay)) {
    button.pressed = false;
    Keyboard.release(button.key);
  } else if (digitalRead(button.pin) == LOW && !button.pressed) {
    button.lastRead = micros();
    button.pressed = true;
    Keyboard.press(button.key);
  }
}

// LOOP
void loop() {
  for (Button &button : buttons) {
    updateButton(button);
  }
}
