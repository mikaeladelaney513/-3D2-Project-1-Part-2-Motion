// https://www.instructables.com/Arduino-How-to-Control-Servo-Motor-With-Potentiome/

#include <Servo.h> // add servo library

Servo myservo; // create servo object to control servo

int potpin = 0; // analong pin used to connect the potentiometer
int val; // variable to read the value from the analog pin

void setup() {
  myservo.attach(9); // pin 9 on arduino
}

void loop() {
  val = analogRead(potpin);
  val = map(val, 0, 1023, 0, 180);
  myservo.write(val);
  delay(15);
}
