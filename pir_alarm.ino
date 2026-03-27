const int pirPin = 2;
const int buzzer = 9;
const int led = 13;
int pirState = LOW;

void setup() 
{
  pinMode(pirPin, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  pirState = digitalRead(pirPin);
  if (pirState == HIGH) 
  {
    digitalWrite(buzzer, HIGH);
    digitalWrite(led, HIGH);
    Serial.println("Movement detected!");
  } 
  else 
  {
    digitalWrite(buzzer, LOW);
    digitalWrite(led, LOW);
  }
  delay(200);
}
