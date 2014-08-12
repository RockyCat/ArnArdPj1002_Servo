/*****************************
  Title: Digital Input Test
  Date: 2014-08-12
  By: April
*****************************/
#define btnPin    2
#define ledPin    8

#define BTN_ON    LOW
#define BTN_OFF   HIGH

#define LED_ON    LOW
#define LED_OFF   HIGH

void setup() {
  pinMode(btnPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  if (digitalRead(btnPin) == BTN_ON) {
    digitalWrite(ledPin, LED_ON);
    delay(200);
    digitalWrite(ledPin, LED_OFF);
    delay(200);
  }
}
