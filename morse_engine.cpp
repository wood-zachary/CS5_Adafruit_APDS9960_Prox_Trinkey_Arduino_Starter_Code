#include "morse_engine.h"
#include "morse_code.h"

void set_color(uint32_t elapsed_time, Adafruit_NeoPixel& pixels) {
  // Your Code Here!
}


String add_mark(uint32_t elapsed_time) {
  // Your Code Here!
  return "";
}


void run_morse_engine(Adafruit_APDS9960& apds, Adafruit_NeoPixel& pixels, Adafruit_FreeTouch& touch1, Adafruit_FreeTouch& touch2) {
  String morse = ""; // Dots, dashs, and slashes so far
  uint32_t start = millis(); // Time when proximity sensor was first triggered

  // Main loop
  while (true) {
    if (touch1.measure() > TOUCH_THRESHOLD || touch2.measure() > TOUCH_THRESHOLD) {
      Serial.print("Touched!");
    }
    Serial.println("Your message should be here <==");
  }
}