#include<stdio.h>
int strlen(char *ptr /*st*/){
    // char *ptr = st;
    int len=0;
    while(*ptr!='\0'){
        len++;
        ptr++;
    }
    return len;
}

int main(){
    char st[] = "raza hy";
    int l = strlen(st);
    printf("The length of this string is %d", l);
    return 0;
}