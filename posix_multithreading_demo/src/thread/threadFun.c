/* Denys Odoviychuk
 * Section 3
 * Spring 2026*/

#include "lab11.h"

extern int counter;
extern pthread_mutex_t mutex;

void *threadFun(void *arg) {
    pthread_mutex_lock(&mutex);

    for(int i = 0; i<10000;i++) counter++;
    for(int i = 0; i<10000;i++) counter--;
    counter--;

    pthread_mutex_unlock(&mutex);

    int *val = (int *)arg;
    int *result = malloc(sizeof(int));
    *result = *val + 1;
    return result;
}
