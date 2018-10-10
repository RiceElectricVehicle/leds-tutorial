#include <Arduino.h>

class LEDToy
{
public:
  uint8_t pin;
  LEDToy(uint8_t pin_number);
  void begin();
  void flash(int frequency);
  void dim(int delay_time);
};
