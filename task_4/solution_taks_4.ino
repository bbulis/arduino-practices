#include <Arduino.h>

int voltage_history[10];
uint8_t voltage_pin = A4;

void setup()
{
    pinMode(voltage_pin, INPUT);
    Serial.begin(9600);
}

void loop()
{
    int voltage = analogRead(voltage_pin);
    for (int i = 9; i > 0; i--)
    {
        int current = voltage_history[i - 1];
        voltage_history[i] = current;
    }
    voltage_history[0] = voltage;
    for (int k = 1; k < 10; k++)
    {
        Serial.println(voltage_history[k]);
    }
}