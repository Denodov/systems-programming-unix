/* Denys Odoviychuk
 * Section 3
 * Spring 2026 */

#include "lab9.h"

int running = 1;

int main(int argc, char *argv[]) {
    if(argc < 2) {
        fprintf(stderr, "Error: must provide a data file name\n");
        return 1;
    }

    signal(SIGUSR1, handleSIGUSR1);
    signal(SIGTERM, handleSIGTERM);
    signal(SIGTSTP, SIG_IGN);

    printf("Lab9 - Structs, Linked Lists and Signals\n");

    loadEmpData(argv[1]);
    printEmpList('f');
    printEmpList('r');

    while(running) {
        sleep(1);
    }

    printf("Exiting program!\n");
    return 0;
}
