#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)malloc(6 * sizeof(int));

    int num1 = 2; 
    int num2 = 4; 
    int num3 = 5; 
    int num4 = 7; 
    int num5 = 8; 
    int num6 = 9; 

    printf("All the numbers are here: %d\n", num1);
    printf("All the numbers are here: %d\n", num2);
    printf("All the numbers are here: %d\n", num3);
    printf("All the numbers are here: %d\n", num4);
    printf("All the numbers are here: %d\n", num5);
    printf("All the numbers are here: %d\n", num6);
    return 0;
}