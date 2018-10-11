#include <Arduino.h>

class LEDToy {
 public:
  // variable to store pin number
  uint8_t pin;

  // constructor
  LEDToy(uint8_t pin_number);

  // called in setup, initializes pin to OUTPUT
  void begin();

  // flashes LED once.
  void flash(int frequency);

  // slowly turns LED on and off once.
  void dim(int delay_time);
};
