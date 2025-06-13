#ifndef SYMBOLS_H
#define SYMBOLS_H

#include <Arduino.h>

struct MorseSymbol {
    const char* symbol;
    const char  letter;
};

const MorseSymbol MORSE_SYMBOL_TO_LETTER[] = {
    {".-", 'A'}, 
    {"-...", 'B'}, 
    {"-.-.", 'C'}, 
    {"-..", 'D'},
    {".", 'E'}, 
    {"..-.", 'F'}, 
    {"--.", 'G'}, 
    {"....", 'H'},
    {"..", 'I'}, 
    {".---", 'J'}, 
    {"-.-", 'K'}, 
    {".-..", 'L'},
    {"--", 'M'}, 
    {"-.", 'N'}, 
    {"---", 'O'}, 
    {".--.", 'P'},
    {"--.-", 'Q'}, 
    {".-.", 'R'}, 
    {"...", 'S'}, 
    {"-", 'T'},
    {"..-", 'U'}, {"...-", 'V'}, 
    {".--", 'W'}, 
    {"-..-", 'X'},
    {"-.--", 'Y'}, 
    {"--..", 'Z'},

    {".----", '1'}, 
    {"..---", '2'}, 
    {"...--", '3'}, 
    {"....-", '4'},
    {".....", '5'}, 
    {"-....", '6'}, 
    {"--...", '7'}, 
    {"---..", '8'},
    {"----.", '9'}, 
    {"-----", '0'},

    {"----", ' '},        // space
    {"......", '\b'}      // del
};

const size_t NUM_MORSE_SYMBOLS = sizeof(MORSE_SYMBOL_TO_LETTER) / sizeof(MorseSymbol);

char lookup_morse_symbol(const String& symbol);

#endif
