#include <stdio.h>

int fib(int n);

int main()
{
    int n;
    printf("Enter the nth number in fibonacci series: ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Fibonacci of negative number is not possible.\n");
    }
    else
    {
        printf("The %d number in fibonacci series is %d\n", n, fib(n));
    }
    return 0;
}

int fib(int n){

    // printf("Calling fibonacci (%d)\n", n);

    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return(fib(n - 1) + fib(n - 2));
    }
}