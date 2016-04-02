/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */

void setup() {                
  // initialize the digital pin as an output.
  // Pin 13 has an LED connected on most Arduino boards:
  pinMode(7, OUTPUT);       
  pinMode(10, OUTPUT);       
  pinMode(13, OUTPUT);     
}

void loop() {
  digitalWrite(7, HIGH);   // set the LED on
  delay(500);              // wait for a second
  digitalWrite(7, LOW);    // set the LED off
  delay(1000);              // wait for a second
  digitalWrite(7, HIGH);
  delay(500);
  digitalWrite(7, LOW);
  delay(250);
  digitalWrite(10, HIGH);   // set the LED on
  delay(500);              // wait for a second
  digitalWrite(10, LOW);    // set the LED off
  delay(1000);              // wait for a second
  digitalWrite(10, HIGH);
  delay(500);
  digitalWrite(10, LOW);
  delay(250);
  digitalWrite(13, HIGH);   // set the LED on
  delay(500);              // wait for a second
  digitalWrite(13, LOW);    // set the LED off
  delay(1000);              // wait for a second
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(250);

}   
