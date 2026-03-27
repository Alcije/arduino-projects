const int trig = 9;
const int echo = 10;
const int led = 13;

void setup()
{
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(led, OUTPUT);
}

void loop()
{
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  
  long duration = pulseIn(echo,HIGH);
  int distance = duration*0.034/2;
  
  if(distance<20) digitalWrite(led,HIGH);
  else digitalWrite(led,LOW);
  delay(100);
}
