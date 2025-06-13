#include "serial_printer.h"

void run_serial_printer(Adafruit_APDS9960& apds, Adafruit_FreeTouch& touch1, Adafruit_FreeTouch& touch2) {
  while (true) {
    uint16_t prox = apds.readProximity();
    uint16_t touch1_raw = touch1.measure();
    bool touch1_bool = (touch1_raw > TOUCH_THRESHOLD);
    uint16_t touch2_raw = touch2.measure();
    bool touch2_bool = (touch2_raw > TOUCH_THRESHOLD);

    Serial.println(String("Proximity: ") + prox);
    Serial.println(String("Touch1: ") + touch1_raw + String(", ") + touch1_bool);
    Serial.println(String("Touch2: ") + touch2_raw + String(", ") + touch2_bool);

    Serial.println();

    delay(LOOP_DELAY);
  }
}