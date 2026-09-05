#include <stdio.h>
#include "funs.h"

int main(int argc, char *argv[]) {
    if (argc >= 2) {
        printf("Running %s with parameter \"%s\"\n", argv[0], argv[1]);
    } else {
        printf("Running %s with parameter \"\"\n", argv[0]);
    }

    int num;

    while (1) {
        printf("Enter an integer (0 to quit): ");
        scanf("%i", &num);

        if (num == 0) break;

        printf("The square of %i is %i\n", num, fun1(num));
        printf("The next num is %i\n", fun2(num));
        printf("The half of %i is %6.2f\n", num, fun3(num));
    }

    return 0;
}
