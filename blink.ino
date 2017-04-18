/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 13;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);  //Somethig new here   
}

// the loop routine runs over and over again forever:
void loop() {
<<<<<<< HEAD
  //This is a new comment & is better
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(6000);               // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  //more commenting
  delay(2000);               // wait for a second
  digitalWrite(led,HIGH);    // second on
  delay(2000);               // wait for a second
  digitalWrite(led,LOW);
  delay(1000); 	
}
