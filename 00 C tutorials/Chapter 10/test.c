# include<stdio.h>

int main()
{
    int num1, num2, num3;
    FILE *ptr;
    ptr = fopen("pr01.txt" , "r");
    fscanf(ptr, "%d %d %d", &num1, &num2, &num3);
    // fscanf(ptr, "%d", &num2);
    // fscanf(ptr, "%d", &num3);
    fclose(ptr);
    printf("The value of num1, num2, num3 is %d %d %d\n", num1, num2, num3);
    // printf("The value of num2 is %d\n", num2);
    // printf("The value of num3 is %d\n", num3);


    return 0;
}