/* Denys Odoviychuk
 * Section 3
 * Spring 2026*/

#include "lab6.h"

int is5set(unsigned int num) {
    return (num & BIT5_MASK) ? 1 : 0;
}

unsigned int maskIt(unsigned int num) {
    return num | MASK_OR;
}

unsigned int shiftItLeft(unsigned int num, int bits) {
    return num << bits;
}

unsigned int shiftItRight(unsigned int num, int bits) {
    return num >> bits;
}
