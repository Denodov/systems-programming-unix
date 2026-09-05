/* Denys Odoviychuk
 * Section 3
 * Spring 2026*/

#include "lab10.h"

int main(int argc, char *argv[]) {
    if(argc < 2) {
        fprintf(stderr, CUSAGE, argv[0]);
        return EXIT_FAILURE;
    }
    printf("Starting child program [PID=%d; PPID=%d], got argument \"%s\"\n", getpid(), getppid(), argv[1]);

    char *val = getenv(argv[1]);
    printf("Env var %s via getenv() is \"%s\"\n", argv[1], val ? val : "");

    char *envval = NULL;
    int len = strlen(argv[1]);
    for(int i = 0; environ[i] != NULL; i++) {
        if(strncmp(environ[i], argv[1], len) == 0 && environ[i][len] == '=') {
            envval = environ[i] + len + 1;
            break;
        }
    }
    printf("Env var %s via environ is \"%s\"\n", argv[1], envval ? envval : "");

    sleep(2);
    return EXIT_SUCCESS;
    
}
