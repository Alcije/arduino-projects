const int tempPin = A0;

void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  int val = analogRead(tempPin);
  float voltage = val * 5.0 / 1023.0;
  float temperatureC = voltage * 100; // LM35
  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.println(" C");
  delay(1000);
}
