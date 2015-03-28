/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */

void setup() {                
  // initialize the digital pin as an output.
  // Pin 9 has an LED connected on most Arduino boards:
  pinMode(9, OUTPUT);     
}

void loop() {
  digitalWrite(9, HIGH);   // set the LED on
  delay(8000);              // wait for a second
  digitalWrite(9, LOW);    // set the LED off
  delay(2000); 
  digitalWrite(11, HIGH);   // set the LED on
  delay(2000);              // wait for a second
  digitalWrite(11, LOW);    // set the LED off
  delay(3000);              // wait for a second 
    digitalWrite(13, HIGH);   // set the LED on
  delay(3000);              // wait for a second
  digitalWrite(13, LOW);    // set the LED off
  delay(2000);              // wait for a second
}


