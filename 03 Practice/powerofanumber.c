#include <stdio.h>

long power(int, int);
int main()
{
    int base, exp;
    long double result = 1.0;
    printf("Enter a base number: ");
    scanf("%d", &base);
    printf("Enter an exponent: ");
    scanf("%d", &exp);

    result = power(base, exp);

    printf("Answer = %.0Lf", result);
    return 0;
}

long power(int m, int n)
{
    if (n == 1)
    {
        return m;
    }
    else
    {
        return m * power(m, n - 1);
    }
}
