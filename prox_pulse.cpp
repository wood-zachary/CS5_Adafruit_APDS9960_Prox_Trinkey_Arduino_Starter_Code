#include "prox_pulse.h"
#include "pulse.h"

void prox_pulse(Adafruit_NeoPixel& pixels, uint32_t color, uint16_t prox) {
  // Your Code Here!
}

void run_prox_pulse(Adafruit_APDS9960& apds, Adafruit_NeoPixel& pixels) {
  // Main loop
  while (true) {
    Serial.println(apds.readProximity());
    // Your Code Here!
  }
}