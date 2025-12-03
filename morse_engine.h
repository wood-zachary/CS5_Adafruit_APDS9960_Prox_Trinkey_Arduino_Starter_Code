#ifndef MORSE_ENGINE_H
#define MORSE_ENGINE_H

#include <Arduino.h>
#include <Adafruit_NeoPixel.h>
#include "Adafruit_FreeTouch.h"
#include "Adafruit_APDS9960.h"

static constexpr uint16_t PROX_THRESHOLD = 75;
static constexpr uint16_t TOUCH_THRESHOLD = 200;
static constexpr uint32_t UNIT_TIME = 480;

static constexpr uint32_t RED   = 0xFF0000;
static constexpr uint32_t GREEN = 0x00FF00;
static constexpr uint32_t YELLOW = 0xF09000;

/**
 * @brief Lights the LEDs on the trinkey depending on the length of input.
 *
 * @param elapsed_time  duration of proximity detection.
 * @param pixels        LED controller object.
 */
void set_color(uint32_t elapsed_time, Adafruit_NeoPixel& pixels);


/**
 * @brief Determines if input is a dot (.), dash (-), or nothing ("") based 
 *        on the length of input.
 *
 * @param elapsed_time  duration of proximity detection.
 *
 * @return dot (.), dash (-), or empty ("").
 */
String add_mark(uint32_t elapsed_time);


/**
 * @brief Runs Morse code translation based on proximity input.
 *
 * @param apds    proximity sensor.
 * @param pixels  LED controller object.
 * @param touch1  touch sensor for confirming input.
 * @param touch2  touch sensor for confirming input.
 */
void run_morse_engine(Adafruit_APDS9960& apds, Adafruit_NeoPixel& pixels, Adafruit_FreeTouch& touch1, Adafruit_FreeTouch& touch2);

#endif
