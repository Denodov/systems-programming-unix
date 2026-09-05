/* Denys Odoviychuk
 * Section 3
 * Spring 2026*/

#include "lab10.h"

int main(int argc, char *argv[]) {
    printf("Starting parent - PID is %d\n",getpid());

    pid_t retval = fork();
    if(retval < 0) {
        fprintf(stderr, "Error: fork() failed\n");
        return EXIT_FAILURE;
    }
    if(retval > 0) {
        printf("In parent process: PID is %d - fork return is %d\n", getpid(), retval);
        printf("In Parent [%d]: waiting for child to finish...\n", getpid());
        int status;
        wait(&status);
        if(WIFEXITED(status))
            printf("Child exited with %d\n",WEXITSTATUS(status));
    } else {
        printf("In child process: PID is %d - parent PID is %d\n",getpid(),getppid());
        printf("Exec-ing %s with arguments: %s\n",argv[1],argv[1]);
        execvp(argv[1],&argv[1]);
        perror("Call to execvp() failed!");
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}
