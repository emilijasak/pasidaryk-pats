#include <Arduino.h>

String name = "";

void setup() {
  Serial.begin(9600);
  Serial.print("Enter your name");
}

void loop() {
  if (Serial.available() > 0){
    name = Serial.readStringUntil('\n');
    name.trim();

    if (name.length() > 0) {
      Serial.print("Hello, ");
      Serial.print(name);
      Serial.println("! Nice to meet you :)");
      Serial.println("Enter another name:");
    }
  }
}
