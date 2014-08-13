int potPin = A1;
int LED = 9;

void setup()
{
  pinMode(potPin, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(LED, HIGH);
  delay(analogRead(potPin));
  Serial.println(analogRead(potPin));
  
  digitalWrite(LED, LOW);
  delay(analogRead(potPin));
  Serial.println(analogRead(potPin));
  Serial.println("   ");
}
