int led = 13;

void setup() {                
  pinMode(led, OUTPUT);     
}

void loop() {
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100000);               // wait for 100 second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(100000);               // wait for 100 second
}
