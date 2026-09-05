/* Denys Odoviychuk
 * Section 3
 * Spring 2026*/

#include "lab11.h"

int counter = 0;
pthread_mutex_t mutex;

int main(int argc, char *argv[]) {
    if(argc < 2) {
        fprintf(stderr, "Usage: %s <arg> [<num threads>]\n",argv[0]);
        return EXIT_FAILURE;
    }
int arg = atoi(argv[1]);
int numThreads = 1;

if(argc >= 3) {
    numThreads = atoi(argv[2]);
    if(numThreads > MAXTHREADS) {
        fprintf(stderr, "Error: max threads is %d\n", MAXTHREADS);
        return EXIT_FAILURE;
    }
}
pthread_t threads[MAXTHREADS];
void *retvals[MAXTHREADS];

if(numThreads == 1) 
    printf("Creating Thread with arg: %d ...\n", arg);
else
    printf("Creating %d Threads with arg: %d ...\n", numThreads, arg);

counter = numThreads;

pthread_mutex_init(&mutex, NULL);

for(int i = 0; i < numThreads; i++) {
    if(pthread_create(&threads[i], NULL, threadFun, &arg) != 0) {
        fprintf(stderr, "Error: pthread_create() failed\n");
        return EXIT_FAILURE;
    }
}
printf("Joining threads...\n");
for(int i = 0; i < numThreads; i++) {
    pthread_join(threads[i],&retvals[i]);
    if(numThreads == 1)
        printf("Thread returned: %d\n",*(int *)retvals[i]);
    else
        printf("Thread [%d] returned: %d\n",i,*(int *)retvals[i]);
}
printf("Global counter is now: %d\n",counter);

return EXIT_SUCCESS;
}
