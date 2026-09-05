#include <stdlib.h> 
#include <stdio.h>
extern int num1,num2;
int getRange(int num1, int num2) { 
    int x = abs(num1 - num2);
    if(x<=1)
        return 0;

    return x-1;
}
void printResult(int num1,int num2,int x) { 
    printf("\tThe range between %d and %d is: %d\n",num1,num2,x);
}
