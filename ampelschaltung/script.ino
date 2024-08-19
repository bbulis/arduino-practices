#include <Arduino.h>

int led_red = 13;
int led_yellow = 12;
int led_green = 11;

void setup()
{
    pinMode(led_red, OUTPUT);
    pinMode(led_yellow, OUTPUT);
    pinMode(led_green, OUTPUT);
}

void loop()
{
    turn_green();
    delay(10000);
    turn_red();
    delay(10000);
}

void turn_green()
{
    digitalWrite(led_red, HIGH);
    delay(2000);
    digitalWrite(led_red, LOW);
    digitalWrite(led_yellow, HIGH);
    delay(2000);
    digitalWrite(led_yellow, LOW);
    digitalWrite(led_green, HIGH);
}

void turn_red()
{
    digitalWrite(led_green, HIGH);
    delay(2000);
    digitalWrite(led_green, LOW);
    delay(500);
    digitalWrite(led_green, HIGH);
    delay(500);
    digitalWrite(led_green, LOW);
    delay(500);
    digitalWrite(led_green, HIGH);
    delay(500);
    digitalWrite(led_green, LOW);
    delay(500);
    digitalWrite(led_green, HIGH);
    delay(500);
    digitalWrite(led_green, LOW);
    digitalWrite(led_yellow, HIGH);
    delay(2000);
    digitalWrite(led_yellow, LOW);
    digitalWrite(led_red, HIGH);
}
