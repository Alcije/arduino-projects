#include <DHT.h>
#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);
const int relay = 3;

void setup()
{
  dht.begin();
  pinMode(relay, OUTPUT);
}

void loop()
{
  float temp = dht.readTemperature();
  if(temp>25) digitalWrite(relay,HIGH); // ventiler
  else digitalWrite(relay,LOW);
  delay(1000);
}
