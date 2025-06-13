#include "space_macro.h"

void run_space_macro(Adafruit_APDS9960& apds, Adafruit_NeoPixel& pixels) {
  pixels.fill(YELLOW);
  pixels.show();
  uint16_t last_prox = 0;

  while (true) {
    uint16_t prox = apds.readProximity();

    if (prox > THRESHOLD && last_prox <= THRESHOLD) {
      Keyboard.press(KEY_SPACE);
      Keyboard.release(KEY_SPACE);

      pixels.fill(GREEN);
      pixels.show();
      delay(DURATION);

      pixels.fill(YELLOW);
      pixels.show();
    }

    last_prox = prox;

    delay(INTERVAL);
  }
}