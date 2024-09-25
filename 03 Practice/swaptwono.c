#include <stdio.h>

int main()
{
    int first, second, temp;
    printf("Enter the first number: ");
    scanf("%d", &first);

    printf("Enter the second number: ");
    scanf("%d", &second);

    // value of first assigned to temp
    temp = first;

    // value of second assigned to first
    first = second;

    // value of temp is assigned to second
    second = temp;

    printf("\n After swapping , first number = %d\n ", first);
    printf("\n After swapping , second number = %d\n ", second);
    return 0;
}