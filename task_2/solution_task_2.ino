#include <Arduino.h>

unsigned int spannungen[10];


void setup() {
  Serial.begin(9600);
  pinMode(A4, INPUT);
}

void loop(){
  for(int index = 0; index < 10; index = index + 1) {
    int read_value = digitalRead(A4);
    if(read_value > 0) {
      spannung[index] = read_value;
    } else {
      spannung[index] = 10;
    }
    delay(1000);
  }

  delay(2000);

  for(int index = 0; index < 10; index++) {
    Serial.println(spannung[index]);
  }
}
