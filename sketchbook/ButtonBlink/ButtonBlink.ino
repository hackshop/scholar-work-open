/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
int ledPin = 5;
int buttonApin = 9;
int buttonBpin = 8;

byte led = 0;

void setup() 
{                
  pinMode(ledPin, OUTPUT);   
  pinMode(buttonApin, INPUT);
  digitalWrite(buttonApin, HIGH);
  pinMode(buttonBpin, INPUT);
  digitalWrite(buttonBpin, HIGH);
}

void loop() 
{
  if (digitalRead(buttonApin) == LOW);
  {
  digitalWrite(ledPin, HIGH);
  }
  if (digitalRead(buttonBpin) == LOW);
  {
  digitalWrite(ledPin, LOW);
  }
}
