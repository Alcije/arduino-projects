#include <Servo.h>

Servo leftServo;
Servo rightServo;

void setup() 
{
  leftServo.attach(9);
  rightServo.attach(10);
}

void loop() 
{
  leftServo.write(180);
  rightServo.write(0);
  delay(2000);

  leftServo.write(0);
  rightServo.write(180);
  delay(2000);

  leftServo.write(90);
  rightServo.write(90);
  delay(1000);
}
