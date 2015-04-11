/*
Adafruit Arduino - Lesson 6. Inputs
*/


int ledPin = 5;
int buttonApin = 9;
int buttonBpin = 8;

byte leds = 0;

void setup() 
{
  pinMode(ledPin, OUTPUT);
  pinMode(buttonApin, INPUT);//set pin to input
  digitalWrite(buttonApin, HIGH);//turn on pullup resistors
  pinMode(buttonBpin, INPUT);//set  pin to input
  digitalWrite(buttonBpin, HIGH);//turn on pullup resistors
}
void loop()

{
  if (digitalRead(buttonApin) == LOW)
  {
    digitalWrite(ledPin, HIGH);
  }
  if (digitalRead(buttonBpin) == LOW)
  {
    digitalWrite(ledPin, LOW);
  }
}
