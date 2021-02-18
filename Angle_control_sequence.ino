/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
    myservo.write(0);              // tell servo to go to position in variable 'pos'
    delay(5);                       
    myservo.write(20);              // tell servo to go to position in variable 'pos'
    delay(500); 
    myservo.write(40);              // tell servo to go to position in variable 'pos'
    delay(250);  
    myservo.write(0);              // tell servo to go to position in variable 'pos'
    delay(250);  
    myservo.write(20);              // tell servo to go to position in variable 'pos'
    delay(500); 
    myservo.write(40);              // tell servo to go to position in variable 'pos'
    delay(125);
    myservo.write(60);              // tell servo to go to position in variable 'pos'
    delay(125);
    myservo.write(80);              // tell servo to go to position in variable 'pos'
    delay(125);
    myservo.write(100);              // tell servo to go to position in variable 'pos'
    delay(250);
    myservo.write(120);              // tell servo to go to position in variable 'pos'
    delay(500);
   myservo.write(100);              // tell servo to go to position in variable 'pos'
    delay(250);
       myservo.write(140);              // tell servo to go to position in variable 'pos'
    delay(250);
       myservo.write(120);              // tell servo to go to position in variable 'pos'
    delay(500);
       myservo.write(0);              // tell servo to go to position in variable 'pos'
    delay(700);
    
    
  }
