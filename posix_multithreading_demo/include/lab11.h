/* Denys Odoviychuk
 * Section 3
 * Spring 2026*/

#ifndef LAB11_H
#define LAB11_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

#define MAXTHREADS 10

void *threadFun(void *arg);

#endif
