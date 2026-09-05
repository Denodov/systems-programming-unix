#include <stdlib.h>
#include <stdio.h>
#include "lab5.h"
int main(int argc, char *argv[]) {
    int num1,num2,range;
    if(argc != 3) {
        printf("Usage: %s <arg1> <arg2>\n", argv[0]);
        return 1;
    } else {
        printf("Running %s with arguments %s and %s\n",argv[0],argv[1],argv[2]);
        printf("%s\n", TAGLINE);
        }
    while(1) {
        printf("\nEnter 2 integers (0 0 to quit): ");
        scanf("%d %d",&num1,&num2);

        if(num1 == 0 && num2 == 0)
            break;

        range = getRange(num1,num2);
        printResult(num1,num2,range);
    }
    return 0;
}
