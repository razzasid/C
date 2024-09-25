# include<stdio.h>

int main()
{
    int i , j ;
    i = 2 , j = 4;
    int *ival , *jval;
    ival = &i;
    jval = &j;
    
    printf("address of i is %u\n", &i);
    printf("address of j is %u\n", &j);
    printf("value of i is %d\n", *ival);
    printf("value of j is %d\n", *jval);
   
    return 0;
}