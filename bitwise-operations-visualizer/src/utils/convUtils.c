#include <stdio.h>
#include <stdlib.h>
#include <limits.h> // For CHAR_BIT

/**
 * Converts an integer to its binary representation as a dynamically allocated string.
 */
char* dToB(int n) {
    // Determine the number of bits for an int, plus 1 for the null terminator.
    // CHAR_BIT is the number of bits in a byte. Add sizeof(int) for space separators.
    int num_bits = sizeof(int) * CHAR_BIT;
    int str_bits = num_bits + 1 + 7;

    char* binaryString = (char*)malloc(2*num_bits);

    if (binaryString == NULL) {
	return NULL; // Memory allocation failed
    }

    // Use an unsigned int for bit manipulation to handle negative numbers correctly
    unsigned int temp_n = (unsigned int)n;

    // Populate the string from right to left (least significant bit to most significant bit)
    int j = str_bits - 1;
    for (int i = num_bits - 1; i >= 0; i--) {
	binaryString[j--] = ((temp_n & 1) ? '1' : '0');
	if (i%4 == 0) {
	    binaryString[j--] = ' ';
	}
	temp_n >>= 1;
    }

    binaryString[str_bits] = '\0'; // Null-terminate the string

    return binaryString;
}
