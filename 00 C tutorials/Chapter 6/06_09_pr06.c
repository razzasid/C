# include<stdio.h>

void change(int i){
    i = i * 10;
}
// Verify that Change value of a variable by call by value.

int main()
{
    int a = 3;
    printf("The value of a variable before change is %d\n", a);
    change(a);
    printf("The value of a variable after change is %d\n", a);
    
    return 0;
}