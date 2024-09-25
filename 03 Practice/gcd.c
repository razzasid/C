#include <stdio.h>

int main()
{
    int n1, n2, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    for (int i = 0; i <= n1 && i <= 2; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
        }
    }

    printf("gcd of %d and %d is %d", n1, n2, gcd);

    return 0;
}