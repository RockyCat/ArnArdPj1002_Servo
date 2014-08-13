/******************************
Title:TEST_Servo
Date:2014/8/13
By:Aaron
Description:
******************************/


int LED = 9;       
int ServoPin = 10;
void setup()
{
  pinMode(ServoPin, OUTPUT);
  pinMode(LED, OUTPUT);
}

void loop()
{
  loop1();
}

void loop0()
{
    
  for(int a = 0; a <= 255 ; a++)
 { 
  analogWrite(LED, a);
  delay(100);
 }
 
 for(int a = 255; a >=255 ; a--)
 {
   analogWrite(LED, a);
   delay(100);
 }
}

void loop1()
{
  int t;
  
  for(t=750;t<2000;t++)
  {
    digitalWrite(ServoPin, HIGH);
    delayMicroseconds(t);
    digitalWrite(LED, HIGH);
    digitalWrite(ServoPin, LOW);
    digitalWrite(LED, LOW);
    delay(2);
  }
}
  
