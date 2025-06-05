/*
  Blink - Enhanced Version
  Creates a fancy blinking pattern with variable delays and brightness levels.
  Perfect for testing GitHub PR workflows!
 
  This example code is in the public domain.
 */

// Constants for pin and timing configurations 
const int LED_PIN = 13;  // Most Arduino boards have built-in LED on pin 13
const int FADE_STEPS = 5;
const int FADE_DELAY = 50;

// Global variables for LED state
int brightness = 0;
bool increasing = true;

void setup() {
  // Initialize LED pin and serial communication
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);  // For debugging
  Serial.println("Fancy Blink Pattern Started!");
}

void loop() {
  // Fancy fade effect
  if (increasing) {
    brightness += 51;  // 255/5 steps = 51 per step
    if (brightness >= 255) {
      brightness = 255;
      increasing = false;
    }
  } else {
    brightness -= 51;
    if (brightness <= 0) {
      brightness = 0; 
      increasing = true;
    }
  }

  analogWrite(LED_PIN, brightness);  // PWM output for smooth fading
  delay(FADE_DELAY);  // Short delay for smooth animation
  
  // Add a pause at min/max brightness
  if (brightness == 0 || brightness == 255) {
    delay(500);  // Dramatic pause!
  }
}
