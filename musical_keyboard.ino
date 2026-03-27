const int buttonPins[] = {2,3,4};
const int buzzer = 8;
const int tones[] = {262, 294, 330};

void setup() 
{
  for(int i=0;i<3;i++) pinMode(buttonPins[i], INPUT_PULLUP);
}

void loop() 
{
  for(int i=0;i<3;i++)
  {
    if(digitalRead(buttonPins[i]) == LOW)
    {
      tone(buzzer, tones[i]);
    }
  }
  noTone(buzzer);
}
