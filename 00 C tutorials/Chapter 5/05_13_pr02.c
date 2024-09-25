#include<stdio.h>
float farenheit(float c);

int main()
{
    float cel;
    printf("Enter the value of cel\n");
    scanf("%f", &cel);
    
    printf("The Temprature in celcius to farenheit is %.1f", farenheit(cel));
    return 0;
}

float farenheit(float c){
    float result;
    result = (c * 9/5) + 32;
    return result;
}