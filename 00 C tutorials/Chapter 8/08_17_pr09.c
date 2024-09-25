#include<stdio.h>
int avalaiblechar(char st[], char c){
    char *ptr = st;
    int check=0;
    while(*ptr!='\0'){
        if (*ptr==c){
           printf("\nCharecter found"); 
        }
        else {
            printf("\nCharecter found");
        }
        ptr++;
    }
    return check;
}
int main(){
    char st[] = "my name is raza";
    int check= avalaiblechar(st, 'r');
    printf("character is avalaible or not = %d", check);
    return 0;
}