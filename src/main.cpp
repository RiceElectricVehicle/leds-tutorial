#include <Arduino.h>
#include <LEDToy.h>

byte LED_pin = 6;
LEDToy LED1(LED_pin);

void setup() {
  Serial.begin(115200);
  LED1.begin();
}

void loop() {
  LED1.flash(3);
}
