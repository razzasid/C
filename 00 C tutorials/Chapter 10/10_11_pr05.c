# include<stdio.h>

int main()
{
    FILE *ptr;
    int num;
    ptr = fopen("double.txt", "r");
    fscanf(ptr, "%d", &num);
    ptr = fopen("double.txt", "w");
    fprintf(ptr, "%d\n", num*2);
    fclose(ptr);

    printf("The number is successfully doubled\n");

    return 0;
}