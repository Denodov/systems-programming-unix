/* Denys Odoviychuk
 * Section 3
 * Spring 2026 */

#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#include <errno.h>

void generateReport(void) {
    FILE *levelCountFile;
    levelCountFile = fopen(COUNT_REPORT,"w");
    if(levelCountFile == NULL) {
        printf("File open error %s [%d]\n",COUNT_REPORT,errno);
        exit(EXIT_FAILURE);
    }
    fprintf(levelCountFile, "Pest Observation Report\n");
    fprintf(levelCountFile, "The breakdown of pests observed:\n");
    fprintf(levelCountFile, "    Level 1 pests count - %d\n", level1Count);
    fprintf(levelCountFile, "    Level 2 pests count - %d\n", level2Count);
    fprintf(levelCountFile, "    Level 3 pests count - %d\n", level3Count);
}
