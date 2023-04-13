#include <Keyboard.h>

bool pressed2 = false;
bool pressed3 = false;
bool pressed4 = false;
bool pressed5 = false;
bool pressed6 = false;
bool pressed7 = false;
bool pressed8 = false;
bool pressed9 = false;
bool pressed10 = false;
bool pressed11 = false;
bool pressed12 = false;
bool pressedA0 = false;
bool pressedA1 = false;
bool pressedA2 = false;
bool pressedA3 = false;
bool pressedA5 = false;

unsigned long last_read2 = 0;
unsigned long last_read3 = 0;
unsigned long last_read4 = 0;
unsigned long last_read5 = 0;
unsigned long last_read6 = 0;
unsigned long last_read7 = 0;
unsigned long last_read8 = 0;
unsigned long last_read9 = 0;
unsigned long last_read10 = 0;
unsigned long last_read11 = 0;
unsigned long last_read12 = 0;
unsigned long last_readA0 = 0;
unsigned long last_readA1 = 0;
unsigned long last_readA2 = 0;
unsigned long last_readA3 = 0;
unsigned long last_readA5 = 0;

//SETUP
void setup() {
  Serial.begin(115200);
  delay(2000);
  Serial.println("Sheldor ist wieder online");
  
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP);
  pinMode(12, INPUT_PULLUP);
  pinMode(A0, INPUT_PULLUP);
  pinMode(A1, INPUT_PULLUP);
  pinMode(A2, INPUT_PULLUP);
  pinMode(A3, INPUT_PULLUP);
  pinMode(A5, INPUT_PULLUP);

  Keyboard.begin();
}


// TIME_PASSED
bool time_passed(unsigned long pre, unsigned long next, unsigned long threshold) {
  return (next - pre) >= threshold;
}


// LOOP
void loop() {

  // Button 7 HOME
  if (digitalRead(2) == HIGH && pressed2 && time_passed(last_read2, micros(), (unsigned long) 50000)) {
    pressed2 = false;
    Keyboard.release('7');
  } else if (digitalRead(2) == LOW && !pressed2 ) {
    last_read2 = micros();
    pressed2 = true;
    Keyboard.press('7');
  }

  // Button 8
  if (digitalRead(3) == HIGH && pressed3 && time_passed(last_read3, micros(), (unsigned long) 50000)) {
    pressed3 = false;
    Keyboard.release('8');
  } else if (digitalRead(3) == LOW && !pressed3 ) {
    last_read3 = micros();
    pressed3 = true;
    Keyboard.press('8');
  }

  // Button 9 PGUP
  if (digitalRead(4) == HIGH && pressed4 && time_passed(last_read4, micros(), (unsigned long) 50000)) {
    pressed4 = false;
    Keyboard.release('9');
  } else if (digitalRead(4) == LOW && !pressed4 ) {
    last_read4 = micros();
    pressed4 = true;
    Keyboard.press('9');
  }

  // Button Lila
  if (digitalRead(5) == HIGH && pressed5 && time_passed(last_read5, micros(), (unsigned long) 50000)) {
    pressed5 = false;
    Keyboard.release('L');
  } else if (digitalRead(5) == LOW && !pressed5 ) {
    last_read5 = micros();
    pressed5 = true;
    Keyboard.press('L');
  }

  // Button 4
  if (digitalRead(6) == HIGH && pressed6 && time_passed(last_read6, micros(), (unsigned long) 50000)) {
    pressed6 = false;
    Keyboard.release('4');
  } else if (digitalRead(6) == LOW && !pressed6 ) {
    last_read6 = micros();
    pressed6 = true;
    Keyboard.press('4');
  }

  // Button 5
  if (digitalRead(7) == HIGH && pressed7 && time_passed(last_read7, micros(), (unsigned long) 50000)) {
    pressed7 = false;
    Keyboard.release('5');
  } else if (digitalRead(7) == LOW && !pressed7 ) {
    last_read7 = micros();
    pressed7 = true;
    Keyboard.press('5');
  }

  // Button 6
  if (digitalRead(8) == HIGH && pressed8 && time_passed(last_read8, micros(), (unsigned long) 50000)) {
    pressed8 = false;
    Keyboard.release('6');
  } else if (digitalRead(8) == LOW && !pressed8 ) {
    last_read8 = micros();
    pressed8 = true;
    Keyboard.press('6');
  }

  // Button Gruen
  if (digitalRead(9) == HIGH && pressed9 && time_passed(last_read9, micros(), (unsigned long) 50000)) {
    pressed9 = false;
    Keyboard.release('G');
  } else if (digitalRead(9) == LOW && !pressed9 ) {
    last_read9 = micros();
    pressed9 = true;
    Keyboard.press('G');
  }

  // Button 1 END
  if (digitalRead(10) == HIGH && pressed10 && time_passed(last_read10, micros(), (unsigned long) 50000)) {
    pressed10 = false;
    Keyboard.release('1');
  } else if (digitalRead(10) == LOW && !pressed10 ) {
    last_read10 = micros();
    pressed10 = true;
    Keyboard.press('1');
  }

  // Button 2
  if (digitalRead(11) == HIGH && pressed11 && time_passed(last_read11, micros(), (unsigned long) 50000)) {
    pressed11 = false;
    Keyboard.release('2');
  } else if (digitalRead(11) == LOW && !pressed11 ) {
    last_read11 = micros();
    pressed11 = true;
    Keyboard.press('2');
  }

  // Button 3 PGDN
  if (digitalRead(12) == HIGH && pressed12 && time_passed(last_read12, micros(), (unsigned long) 50000)) {
    pressed12 = false;
    Keyboard.release('3');
  } else if (digitalRead(12) == LOW && !pressed12 ) {
    last_read12 = micros();
    pressed12 = true;
    Keyboard.press('3');
  }

  // Button Orange
  if (digitalRead(A0) == HIGH && pressedA0 && time_passed(last_readA0, micros(), (unsigned long) 50000)) {
    pressedA0 = false;
    Keyboard.release('O');
  } else if (digitalRead(A0) == LOW && !pressedA0 ) {
    last_readA0 = micros();
    pressedA0 = true;
    Keyboard.press('O');
  }

  // Button Windows
  if (digitalRead(A1) == HIGH && pressedA1 && time_passed(last_readA1, micros(), (unsigned long) 50000)) {
    pressedA1 = false;
    Keyboard.release('W');
  } else if (digitalRead(A1) == LOW && !pressedA1 ) {
    last_readA1 = micros();
    pressedA1 = true;
    Keyboard.press('W');
  }

  // Button 0 INS
  if (digitalRead(A2) == HIGH && pressedA2 && time_passed(last_readA2, micros(), (unsigned long) 50000)) {
    pressedA2 = false;
    Keyboard.release('0');
  } else if (digitalRead(A2) == LOW && !pressedA2 ) {
    last_readA2 = micros();
    pressedA2 = true;
    Keyboard.press('0');
  }

  // Button . DEL
  if (digitalRead(A3) == HIGH && pressedA3 && time_passed(last_readA3, micros(), (unsigned long) 50000)) {
    pressedA3 = false;
    Keyboard.release('.');
  } else if (digitalRead(A3) == LOW && !pressedA3 ) {
    last_readA3 = micros();
    pressedA3 = true;
    Keyboard.press('.');
  }

  // Button END
  if (digitalRead(A5) == HIGH && pressedA5 && time_passed(last_readA5, micros(), (unsigned long) 50000)) {
    pressedA5 = false;
    Keyboard.release('E');
  } else if (digitalRead(A5) == LOW && !pressedA5 ) {
    last_readA5 = micros();
    pressedA5 = true;
    Keyboard.press('E');
  }
}
