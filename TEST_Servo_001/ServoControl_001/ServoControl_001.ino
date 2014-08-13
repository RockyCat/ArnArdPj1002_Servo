int potPin = A1;
int servoPin = A0;

void setup()
{
  Serial.begin(9600);
  pinMode(potPin, INPUT);
  pinMode(servoPin, OUTPUT);
}

void loop()
{
  int potVal;
  int n;
  
  potVal = analogRead(potPin);
  
  n = map(potVal, 0, 1023, -180, 180);
  
  servoAngle(n);
}

void servoAngle(int angle) 
{
  int pulseWidth;
  
  pulseWidth = map(angle, -180, 180, 220, 2560);
  digitalWrite(servoPin, HIGH);
  delayMicroseconds(pulseWidth);
  
  digitalWrite(servoPin, LOW);
  delayMicroseconds(10000 - pulseWidth);
  
  Serial.print("pulseWidth = ");
  Serial.print(pulseWidth);
  Serial.println("    ");
  
  delay(5);
  
  
}
  
  
  

  
  
  

