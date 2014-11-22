/*
  EasyLED.h - Library for simpler LEDs.
  Created by M. Simpson, November 19, 2014.
  Released into the public domain.
*/
#ifndef EasyLED_h
#define EasyLED_h

#include "Arduino.h"

class EasyLED
{
  public:
    EasyLED(int pin);
    void EasyOn();
    void EasyOff();
    void Blink(int blinkDelay);
  private:
    int _pin;
    int _blinkDelay;
};

#endif
