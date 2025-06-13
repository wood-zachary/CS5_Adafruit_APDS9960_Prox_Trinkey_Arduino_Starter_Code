#ifndef SERIAL_PRINTER_H
#define SERIAL_PRINTER_H

#include <Arduino.h>

#include "Adafruit_FreeTouch.h"
#include "Adafruit_APDS9960.h"

static constexpr unsigned long LOOP_DELAY = 200UL;
static constexpr uint16_t TOUCH_THRESHOLD = 200;

/**
 * @brief Read the apds and touch pads once every LOOP_DELAY seconds and print:
 *          proximity
 *          touch raw value, touch boolean
 *
 * @param apds    proximity sensor.
 * @param touch1  touch sensor for confirming input.
 * @param touch2  touch sensor for confirming input.
 */
void run_serial_printer(Adafruit_APDS9960& apds, Adafruit_FreeTouch& touch1, Adafruit_FreeTouch& touch2);

#endif