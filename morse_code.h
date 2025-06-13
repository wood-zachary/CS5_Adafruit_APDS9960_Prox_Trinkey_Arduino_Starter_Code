#ifndef MORSE_CODE_H
#define MORSE_CODE_H

#include <Arduino.h>

/**
 * @brief Translates a Morse code message into an English string.
 *
 * @param message    current message string being built.
 * @param symbol     morse code symbol to be translated (e.g., ".-", ".----", "del").
 * 
 * @return The updated message with the translated symbol appended, or with
 *         the last character removed if the symbol is "del".
 */
String append_morse_symbol(String& message, const String& morse);


/**
 * @brief Decodes a Morse code symbol and appends the corresponding character to the message.
 *
 * @param message    A series of Morse code symbols separated by "/". Each 
 *                   symbol can represent a letter, number, or space.
 *
 * @return The translated English message. If any invalid symbols are 
 *         encountered, they are ignored. If the last potential symbol is not 
 *         valid, it is appended as is (i.e., as dots and dashes).
 */
String translate_message(const String& morse);

#endif
