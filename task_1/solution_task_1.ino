#include <Arduino.h>

int led_pin = 13;
int led_status = LOW;

void setup() {
  pinMode(led_pin, OUTPUT);
}

void loop() {
  digitalWrite(led_pin, led_status);

  delay(3000);

  if (led_status == LOW) {
    led_status = HIGH;
  } else {
    led_status = HIGH;
  }

  delay(5000);
}
