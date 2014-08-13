int potPin = A1;
int servoPin = A0;

boolean ledStatus;

void setup()
{
  Serial.begin(9600);
  pinMode(potPin, INPUT);
  pinMode(servoPin, OUTPUT);
  
  pinMode(13, OUTPUT);
  digitalWrite(13, LOW);
}

void loop()
{
  int potVal;
  int n;
  
//  potVal = analogRead(potPin);
  
  do {
    potVal = Serial.read();
  } while (potVal < 0);
  
  digitalWrite(13, HIGH);
  delay(100);
  digitalWrite(13, LOW);
  
  n = map(potVal, 0, 255, -180, 180);
  
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
  
//  Serial.print("pulseWidth = ");
//  Serial.print(pulseWidth);
//  Serial.println("    ");
//  
  delay(5);
}
  
  
  

  
  
  

