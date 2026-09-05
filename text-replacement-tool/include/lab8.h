/* Denys Odoviychuk
 * Section 3
 * Spring 2026 */
#ifndef LAB8_H
#define LAB8_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUFFER_SIZE 256

char **getLines(int *count, char *replacement);
void printVector(char **vector, int count);

#endif

