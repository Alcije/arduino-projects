#include <DHT.h>
#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);
const int ledGreen = 3;
const int ledRed = 4;

void setup() 
{
  dht.begin();
  pinMode(ledGreen, OUTPUT);
  pinMode(ledRed, OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  float t = dht.readTemperature();
  if(t>28 || t<20)
  {
    digitalWrite(ledRed,HIGH);
    digitalWrite(ledGreen,LOW);
  }
  else
  {
    digitalWrite(ledRed,LOW);
    digitalWrite(ledGreen,HIGH);
  }
  delay(1000);
}
