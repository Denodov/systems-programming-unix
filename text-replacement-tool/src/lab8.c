/* Denys Odoviychuk
 * Section 3
 * Spring 2026 */
#include "lab8.h"
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if(argc < 2) {
        fprintf(stderr, "Error: must provide a 3-character replacement string\n");
        return 1;
    } 
    if(strlen(argv[1]) != 3) {
        fprintf(stderr, "Error: string must be 3 characters! Got %zu\n",strlen(argv[1]));
        return 1;
    }
    int count = 0;
    char **vector = getLines(&count, argv[1]);
    if(vector == NULL) {
        fprintf(stderr, "Error: getLines failed\n");
        return 1;
    }
    printf("Printing Vector...%d\n", count);
    printVector(vector, count);

    printf("First Vector element is \"%s\"\n", *vector);
    printf("Last Vector element is \"%s\"\n", *(vector + count - 1));

    int i;
    for(i = 0; i < count; i++) {
        free(vector[i]);
    }
    free(vector);

    return 0;
}

