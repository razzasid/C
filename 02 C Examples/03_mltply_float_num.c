# include<stdio.h>

int main()
{
    float num1, num2;
    printf("Enter first Floating point number: ");
    scanf("%f", &num1);

    printf("Enter second Floating point number: ");
    scanf("%f", &num2);

    float multiply;
    multiply = num1 * num2;
    
    printf("The multiple of Two floating point number is: %.1f", multiply);
    return 0;
}