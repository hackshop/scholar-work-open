/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  Th   is example code is in the public domain.
 */

void setup() {             
  // initialize the digital pin as an output.
  // Pin 13 has an LED connected on most Arduino boards:
  pinMode(13, OUTPUT); 
  pinMode(12, OUTPUT);
  pinMode(8, OUTPUT);  
  pinMode(7, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH); 
  digitalWrite(12, HIGH);
  digitalWrite(7, HIGH);  // set the LED on
  delay(200);              // wait for a second
  digitalWrite(13, LOW);    // set the LED off
  delay(300);              // wait for a second
  digitalWrite(13, HIGH);
  digitalWrite(8, HIGH);  // set the LED on
  delay(200);              // wait for a second
  digitalWrite(13, LOW);    // set the LED off
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(7, LOW);  // set the LED on
  delay(500);              // wait for a second
  digitalWrite(13, LOW);    // set the LED off
  delay(200);              // wait for a second
  digitalWrite(13, HIGH);
  digitalWrite(8, LOW);  // set the LED on
  delay(600);              //, wait for a second
  digitalWrite(13, LOW);    // set the LED off
  delay(400);              // wait for a second
}  


