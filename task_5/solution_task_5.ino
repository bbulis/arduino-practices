#include <Arduino.h>

int flags_history[10];
unsigned rising_flags = 0;
unsigned falling_flags = 0;
uint8_t flag_pin = 12;

void setup()
{
    pinMode(flag_pin, INPUT);
}

void loop()
{
    int flag = digitalRead(flag_pin);
    for (int i = 9; i > 0; i--)
    {
        flags_history[i] = flags_history[i - 1];
    }
    flags_history[0] = flag;

    if (flags_history[0] == HIGH && flags_history[1] == LOW)
    {
        rising_flags++;
    }

    if (flags_history[0] == LOW && flags_history[1] == HIGH)
    {
        falling_flags++;
    }

    delay(200);
}