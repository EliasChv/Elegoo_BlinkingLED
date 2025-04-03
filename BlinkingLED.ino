int ledPins[] = {12, 11, 10};  // Array to hold the pin numbers for the LEDs
int numLeds = 3;               // Number of LEDs

void setup() {
  // Initialize all LED pins as outputs
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // Blink LEDs sequentially
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], HIGH);   // Turn the LED on
    delay(500);                        // Wait for 500ms
    digitalWrite(ledPins[i], LOW);    // Turn the LED off
    delay(500);                        // Wait for 500ms
  }
}
