#ifndef SPACE_MACRO_H
#define SPACE_MACRO_H

#include <Arduino.h>

#include "Adafruit_APDS9960.h"
#include <Adafruit_NeoPixel.h>
#include <HID-Project.h>

static constexpr uint16_t THRESHOLD = 150;
static constexpr unsigned long DURATION = 250UL;
static constexpr unsigned long INTERVAL = 50UL;
static constexpr uint32_t GREEN = 0x00FF00;
static constexpr uint32_t YELLOW = 0xF09000;

/**
 * @brief Press the space key with a component or peripheral of your Trinkey.
 *
 * @param apds    proximity sensor.
 * @param pixels  NeoPixel object.
 */
void run_space_macro(Adafruit_APDS9960& apds, Adafruit_NeoPixel& pixels);

#endif