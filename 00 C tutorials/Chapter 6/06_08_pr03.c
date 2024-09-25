# include<stdio.h>

void change(int *i){
    *i = *i * 10;
}

int main()
{
    int a = 3;
    printf("The value of a variable before change is %d\n", a);
    change(&a);
    printf("The value of a variable after change is %d\n", a);
    
    return 0;
}