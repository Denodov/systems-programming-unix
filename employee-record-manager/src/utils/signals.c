/* Denys Odoviychuk
 * Section 3
 * Spring 2026 */

#include "lab9.h"
#include <signal.h>

extern int running;

void handleSIGUSR1(int sig) {
    char msg[50];
    int len = snprintf(msg, sizeof(msg), "PID [%d] got sig %d\nHandling SIGUSR1...\n", getpid(), sig);
    write(STDOUT_FILENO, msg, len);
}

void handleSIGTERM(int sig) {
    char msg[50];
    int len = snprintf(msg, sizeof(msg), "PID [%d] got sig %d\nHandling SIGTERM...\n", getpid(), sig);
    write(STDOUT_FILENO, msg, len);
    running = 0;
}
