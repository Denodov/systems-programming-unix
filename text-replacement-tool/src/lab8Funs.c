/* Denys Odoviychuk
 * Section 3
 * Spring 2026*/
#include "lab8.h"

char **getLines(int *count, char *replacement) {
    char buffer[BUFFER_SIZE];
    char **vector = NULL;
    *count = 0;

    while(fgets(buffer, BUFFER_SIZE, stdin) != NULL) {
        char *newline = strchr(buffer, '\n');
        if(newline != NULL)
            *newline = '\0';

        char *xyz = strstr(buffer, "XYZ");
        if(xyz != NULL)
            strncpy(xyz, replacement, 3);

        char *copy = malloc(strlen(buffer) + 1);
        if(copy == NULL) {
            fprintf(stderr, "Error: malloc failed for copy\n");
            return NULL;
        }
        strcpy(copy, buffer);

        vector = realloc(vector, (*count + 1) * sizeof(char *));
        if(vector == NULL) {
            fprintf(stderr, "Error: realloc failed for vector\n");
            return NULL;
        }
    vector[*count] = copy;
    (*count)++;
    }

    return vector;
}
void printVector(char **vector, int count) {
    int i;
    for(i = count - 1; i >= 0; i--) {
        printf("%s\n", vector[i]);
    }
}
