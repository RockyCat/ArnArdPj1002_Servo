int potPin = A1;
int servoPin = A0;

boolean ledStatus;

void setup
  Serial.begin(115200);
  pinMode(potPin, INPUT);
  pinMode(servoPin, OUTPUT);
  
  servoAngle(0);
  servoAngle(0);
  servoAngle(0);
  servoAngle(0);
  
  delay(5000);
}

void loop()  
{
  int income;
  int n;
  
//  potVal = analogRead(potPin);
  
  do {
    income = Serial.read();
//    Serial.print(income);
    
//    pinMode(13, OUTPUT);
//    digitalWrite(13, LOW);

  } while (Serial.available() > 0);
  
  
//  digitalWrite(13, HIGH);
//  delay(100);
//  digitalWrite(13, LOW);
  
  n = map(income, 0, 9, 0, 180);
  
  constrain(income, 0, 9);
  constrain(n, 0, 180);
  
  servoAngle(n);
}

void servoAngle(int angle) 
{
  int pulseWidth;
  
  pulseWidth = map(angle, 0, 180, 220, 2560);
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

