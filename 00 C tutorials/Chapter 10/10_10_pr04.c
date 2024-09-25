# include<stdio.h>

int main()
{
    FILE *ptr;
    char name1[20], name2[20];
    int slry1, slry2;
    printf("Enter the name of first Employee\n");
    gets(name1);
    printf("Enter the salary of first Employee\n");
    scanf("%d", &slry1);
    printf("Enter the name of second Employee\n");
    gets(name2);
    printf("Enter the salary of second Employee\n");
    scanf("%d", &slry2);

    ptr = fopen("emloyeelist.txt", "w");
    fprintf(ptr, "%s,  %d\n", name1 , slry1);
    fprintf(ptr, "%s,  %d\n", name2 , slry2);
    fclose(ptr);

    printf("Successfully generated list to emloyeelist.txt\n");

    return 0;
}