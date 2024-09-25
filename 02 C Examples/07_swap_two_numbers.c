# include<stdio.h>

int main()
{
    int a, b, temp;
    a = 4;
    b = 7;
    printf("Number 'a' before swap is: %d\n", a);
    printf("Number 'b' before swap is: %d\n", b);
    
    // Value of first is assigned to temp
    temp = a;

    // Value of second is assigned to first
    a = b;

    // Value of temp (initial value of first) is assigned to second
    b = temp;

    printf("Number 'a' after swap is: %d\n", a);
    printf("Number 'b' after swap is: %d\n", b);

    return 0;
}