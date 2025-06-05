/*
  Blink - Enhanced Version
  Creates a fancy blinking pattern with variable delays and brightness levels.
  Perfect for testing GitHub PR workflows!
 
  This example code is in the public domain.
 */

// Constants for pin and timing configurations 
const int LED_PIN = 13;  // Most Arduino boards have built-in LED on pin 13
const int FADE_STEPS = 5;
const int FADE_DELAY = 30;  // Reduced delay for faster animation
const int PAUSE_DELAY = 300;  // Shorter dramatic pause

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
  // Implement smoother fading with smaller steps
  if (increasing) {
    brightness += 25;  // Smaller steps for smoother transition
    if (brightness >= 255) {
      brightness = 255;
      increasing = false;
    }
  } else {
    brightness -= 25;
    if (brightness <= 0) {
      brightness = 0;
      increasing = true;
    }
  }

  analogWrite(LED_PIN, brightness);
  delay(FADE_DELAY);
  
  // Add shorter pause at min/max brightness
  if (brightness == 0 || brightness == 255) {
    delay(PAUSE_DELAY);
  }
}
