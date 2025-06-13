#include <Adafruit_NeoPixel.h>
#include "Adafruit_FreeTouch.h"
#include "Adafruit_APDS9960.h"
#include <HID-Project.h>
#pragma GCC diagnostic ignored "-Wnarrowing"


// Comment out modules when you're not using them to prevent conflicting variable names & redefinitions
#include "serial_printer.h"
// #include "pulse.h"
// #include "prox_pulse.h"
// #include "morse_engine.h"
// #include "space_macro.h"

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUM_NEOPIXEL, PIN_NEOPIXEL, NEO_GRB + NEO_KHZ800);

Adafruit_FreeTouch touch1 = Adafruit_FreeTouch(1, OVERSAMPLE_4, RESISTOR_50K, FREQ_MODE_NONE);
Adafruit_FreeTouch touch2 = Adafruit_FreeTouch(2, OVERSAMPLE_4, RESISTOR_50K, FREQ_MODE_NONE);

Adafruit_APDS9960 apds;

void setup() {
  Serial.begin(9600);

  pixels.begin();
  pixels.setBrightness(20);
  pixels.show();

  Keyboard.begin();

  if (!touch1.begin())  
    Serial.println("Failed to begin touch pad on pin 1.");
  if (!touch2.begin())  
    Serial.println("Failed to begin touch pad on pin 2.");

  if(!apds.begin())
    Serial.println("Failed to begin apds.");

  Serial.println("APDS initialized!");
  apds.enableProximity(true);
  // apds.enableColor()
  // apds.enableGesture()
  apds.setProxGain(APDS9960_PGAIN_8X);
}

void loop() {
  run_serial_printer(apds, touch1, touch2);
  // run_simple_pulse(pixels);
  // run_prox_pulse(apds, pixels);
  // run_morse_engine(apds, pixels, touch1, touch2);
  // run_space_macro(apds, pixels);
}