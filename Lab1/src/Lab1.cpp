/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "d:/WindyCity_IOT/Labs/Lab1/src/Lab1.ino"
/*
 * Project Lab1
 * Description:
 * Author:
 * Date:
 */

void setup();
void loop();
#line 8 "d:/WindyCity_IOT/Labs/Lab1/src/Lab1.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

// setup() runs once, when the device is first turned on.
void setup() {
  //init pinmode
  pinMode(D5, OUTPUT);

}

// loop() runs over and over again, as quickly as it can execute.
// in this case, I am just looping turning the LED on & off
void loop() {
  digitalWrite(D5, HIGH);
  delay(500);
  digitalWrite(D5, LOW);
  delay(500);
}