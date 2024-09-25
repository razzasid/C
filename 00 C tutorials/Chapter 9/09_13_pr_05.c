#include <stdio.h>

typedef struct complex
{
    float real;
    float img;
}complexno;

int main()
{
    complexno c1,c2;
    c1.real = 33.7;
    c2.img = 55.3;
    printf("The value of real part is %.1f\n",c1.real);
    printf("The value of Imaginary part is %.1f\n", c2.img);
    return 0;
}