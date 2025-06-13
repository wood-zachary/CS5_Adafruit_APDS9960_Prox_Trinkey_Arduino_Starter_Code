#include "symbols.h"

char lookup_morse_symbol(const String& symbol) {
    for (size_t i = 0; i < NUM_MORSE_SYMBOLS; ++i) {
        if (symbol == MORSE_SYMBOL_TO_LETTER[i].symbol) {
            return MORSE_SYMBOL_TO_LETTER[i].letter;
        }
    }
    return '\0';  // null character
}