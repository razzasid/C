# include<stdio.h>

int sumofnaturalno(int x);

int main()
{
    int n;
    printf("Enter the nth natural number\n");
    scanf("%d", &n);

    printf("The sum of first %d natural numbers is: %d", n , sumofnaturalno(n));

    return 0;
}

int sumofnaturalno(int x){

    printf("Calling natural no (%d)\n", x);

    if (x == 0)
    {
        return 0;
    }
    else if (x == 1)
    {
        return 1;
    }
    else{
        return sumofnaturalno(x-1) + x;
    }
    

}