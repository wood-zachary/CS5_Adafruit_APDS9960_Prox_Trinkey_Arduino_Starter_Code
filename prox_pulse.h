#ifndef PROX_PULSE_H
#define PROX_PULSE_H

#include <Adafruit_NeoPixel.h>
#include "Adafruit_APDS9960.h"
#include <Arduino.h>

static constexpr uint16_t THRESHOLD = 75;

static constexpr uint32_t RED   = 0xFF0000;
static constexpr uint32_t GREEN = 0x00FF00;

/**
 * @brief Maps proximity value to pulse duration and calls pulse.
 *
 * @param pixels    LED controller object.
 * @param color     Color to pulse.
 * @param prox      Proximity value.
 */
void prox_pulse(Adafruit_NeoPixel& pixels, uint32_t color, uint16_t prox);


/**
 * @brief Maps proximity value to pulse duration and calls pulse.
 *
 * @param pixels    LED controller object.
 * @param color     Color to pulse.
 * @param prox      Proximity value.
 */
void run_prox_pulse(Adafruit_APDS9960& apds, Adafruit_NeoPixel& pixels);

#endif