/* Denys Odoviychuk
 * Section 3
 * Spring 2026 */
#ifndef LAB6_H
#define LAB6_H

#define OUT_FILE "lab6.out"

char *dToB(int n);

#define MASK_OR   0x0220u
#define BIT5_MASK (1u << 4)

int is5set(unsigned int num);
unsigned int maskIt(unsigned int num);
unsigned int shiftItLeft(unsigned int num, int bits);
unsigned int shiftItRight(unsigned int num, int bits);

#endif
