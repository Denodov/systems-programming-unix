#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    int count;

    printf("Enter a number: ");
    scanf("%i",&n);

    if(n < 0) {
        n = 0;
    }

    for(count = 0; count <= n; count++) {

        if(count % 2 == 0) {
            continue;
        }

    printf("For %d\n",count);
    }

    count = 1;

    while(count <= n) {
        if(count > 7) {
            break;
        }
        printf("While %d\n",count);
        count++;
    }

    count = 1;

    if(n > 0) {
        do { 
            printf("Do-while %d\n",count);
            count++;
        } while(count <= n);
    }
    return EXIT_SUCCESS;
}
