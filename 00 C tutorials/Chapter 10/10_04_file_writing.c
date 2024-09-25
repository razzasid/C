#include<stdio.h>

int main(){
    FILE *fptr;
    int number = 45;
    fptr = fopen("razag.txt", "w");
    fprintf(fptr, "The number is %d\n", number);
    fprintf(fptr, "Thanks for using fprintf");
    fclose(fptr);

    return 0;
}