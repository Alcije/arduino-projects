const int leftSensor = 2;
const int rightSensor = 3;
const int leftMotor = 9;
const int rightMotor = 10;

void setup()
{
  pinMode(leftSensor, INPUT);
  pinMode(rightSensor, INPUT);
  pinMode(leftMotor, OUTPUT);
  pinMode(rightMotor, OUTPUT);
}

void loop()
{
  int l = digitalRead(leftSensor);
  int r = digitalRead(rightSensor);
  if(l==LOW && r==LOW)
  {
    analogWrite(leftMotor,200);
    analogWrite(rightMotor,200);
  } 
  else if(l==HIGH)
  {
    analogWrite(leftMotor,200);
    analogWrite(rightMotor,0);
  } else if(r==HIGH)
  {
    analogWrite(leftMotor,0);
    analogWrite(rightMotor,200);
  }
}
