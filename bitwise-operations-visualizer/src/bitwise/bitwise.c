/* Denys Odoviychuk
 * Section 3
 * Spring 2026*/

#include <stdio.h>
#include <stdlib.h>

#include "lab6.h"

int main(int argc, char *argv[]) {

    if (argc != 2) {
        fprintf(stderr, "Usage: %s <input-data-file>\n", argv[0]);
        return EXIT_FAILURE;
    }

    FILE *in_file = fopen(argv[1], "r");
    if (in_file == NULL) {
        perror("Error opening input file");
        return EXIT_FAILURE;
    }

    FILE *out_file = fopen(OUT_FILE, "w");
    if (out_file == NULL) {
        perror("Error opening output file");
        fclose(in_file);
        return EXIT_FAILURE;
    }

    int num;

    while (fscanf(in_file, "%d", &num) == 1) {

        unsigned int u = (unsigned int) num;

        /* Print original value */
        char *bin = dToB(num);
        if (bin == NULL) {
            perror("Memory allocation failed in dToB");
            fclose(in_file);
            fclose(out_file);
            return EXIT_FAILURE;
        }

        fprintf(out_file, "Read data: %d [0x%04X]\n", num, u & 0xFFFFu);
        fprintf(out_file, "In Binary: %s\n", bin);
        free(bin);

        /* Bitwise operations */
        unsigned int m  = maskIt(u);
        unsigned int sl = shiftItLeft(u, 3);
        unsigned int sr = shiftItRight(u, 3);

        char *m_bin  = dToB((int)m);
        char *sl_bin = dToB((int)sl);
        char *sr_bin = dToB((int)sr);

        if (m_bin == NULL || sl_bin == NULL || sr_bin == NULL) {
            perror("Memory allocation failed in dToB");
            free(m_bin);
            free(sl_bin);
            free(sr_bin);
            fclose(in_file);
            fclose(out_file);
            return EXIT_FAILURE;
        }

        fprintf(out_file, "MaskIt:    %s\n", m_bin);
        fprintf(out_file, "ShiftLeft: %s\n", sl_bin);
        fprintf(out_file, "ShiftRight:%s\n", sr_bin);

        free(m_bin);
        free(sl_bin);
        free(sr_bin);

        if (is5set(u)) {
            fprintf(out_file, "Bit 5 is set\n\n");
        } else {
            fprintf(out_file, "Bit 5 is NOT set\n\n");
        }
    }

    if (ferror(in_file)) {
        perror("Error reading input file");
    }

    fclose(in_file);
    fclose(out_file);

    return EXIT_SUCCESS;
}
