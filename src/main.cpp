#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("");
  Serial.println("Hi there,");
  Serial.println("In each challenge, you only have to edit the lib/challenge/challenge.h file to have the");
  Serial.println("correct solution. The solutions will be tested through unittests, that you can trigger");
  Serial.println("with the test feature of PlatformIO.");
  Serial.println("");
  Serial.println("You have two options to test your code:");
  Serial.println("* Use the remote board, that is provided for the challenge, then you should use the PlatformIO: remote test");
  Serial.println("    option, as you learned in the startup_env challenge.");
  Serial.println("* Use your own board. You need to edit the platformio.ini file, then use the PlatformIO: Test feature");
  Serial.println("");
  Serial.println("For further information, please visit the README.");
  Serial.println("");
  Serial.println("INFO: to use our remote boards, you need to subscribe on our webpage.");
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(5000);
}