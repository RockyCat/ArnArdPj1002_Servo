#define ServoPin 10

void setup()
{
   pinMode(ServoPin, OUTPUT);
}

void loop()
{ 
  Sergle(0);
  int a;

  for (a=180;a>= -180;a--)
  {
    Sergle(a);
    delay(2);
  }
  
    for (a=-180;a<=180;a++)
  {
    Sergle(a);
    delay(2);
  }
      
}

void Sergle(int angle)
{
  int PulseWidth;
  
  PulseWidth = map(angle, -180, 180, 1000, 2000);
  
  digitalWrite(ServoPin, HIGH);
  delayMicroseconds(PulseWidth);
  digitalWrite(ServoPin, LOW);
  delayMicroseconds(10000 - PulseWidth);
  
}
