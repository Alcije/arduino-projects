const int red = 2;
const int yellow = 3;
const int green = 4;

void setup() 
{
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() 
{
  digitalWrite(red, HIGH);
  delay(5000);
  digitalWrite(red, LOW);
  
  digitalWrite(yellow, HIGH);
  delay(2000);
  digitalWrite(yellow, LOW);
  
  digitalWrite(green, HIGH);
  delay(5000);
  digitalWrite(green, LOW);
}
