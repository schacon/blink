/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
//Constant data
#define led  13                    //Pin conected Led
#define wait_time  1000            //Whait time in milisecond

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(led, HIGH);        // turn the LED on (HIGH is the voltage level)
  delay(wait_time);               // Wait for the time indicated in waiting time
  digitalWrite(led, LOW);         // turn the LED off by making the voltage LOW
  delay(wait_time);               // Wait for the time indicated in waiting time
}
