#include<stdio.h>

int main(){
    FILE *ptr;
    // fgetc demo for reading a file
    ptr = fopen("getcdemo.txt", "r");
    // char c = fgetc(ptr);
    printf("The value of my character is %c\n", fgetc(ptr));
    printf("The value of my character is %c\n", fgetc(ptr));
    printf("The value of my character is %c\n", fgetc(ptr));
    printf("The value of my character is %c\n", fgetc(ptr));
    printf("The value of my character is %c\n", fgetc(ptr));

    // ptr = fopen("putcdemo.txt", "w");
    // putc('r', ptr);
    // putc('a', ptr);
    // putc('z', ptr);
    // putc('a', ptr);
    // fclose(ptr);
    return 0;
}