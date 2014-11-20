/*
  EasyLED.h - Library for simpler LEDs.
  Created by M. Simpson, November 19, 2014.
  Released into the public domain.
*/

#include "Arduino.h"
#include "EasyLED.h"

EasyLED::EasyLED(int pin)
{
  pinMode(pin, OUTPUT);
  _pin = pin;
}

void EasyLED::EasyOn()
{
  digitalWrite(_pin, HIGH);
}
void EasyLED::EasyOff()
{
  digitalWrite(_pin, LOW):
}
void EasyLED::Blink(int blinkDelay)
{
  delay(blinkDelay);
  digitalWrite(_pin, HIGH);
  delay(blinkDelay);
  digitalWrite(_pin, LOW);
}