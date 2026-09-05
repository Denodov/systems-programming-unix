/* Denys Odoviychuk
 * Section 3
 * Spring 2026 */

#include <stdlib.h>
#include <stdio.h>
#include "utils.h"

int main(int argc, char *argv[]) {
   if(argc != 2) {
       fprintf(stderr, "Usage: %s <input-data-file>\n", argv[0]);
       return EXIT_FAILURE;
   }
   char *inputFile = argv[1];
   processFile(inputFile);
   generateReport();
   return EXIT_SUCCESS;
}
