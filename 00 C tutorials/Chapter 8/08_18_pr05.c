#include<stdio.h>

int myStrncpy(char destination[], char source[]) {
    int i;
    for (int i = 0 ; source[i] != '\0'; i++) {
    destination[i] = source[i];
    }
    destination[i] = '\0';
    return destination;
}


int main()
{
    char st[] = "This";
    char st2[] = "yes";
    printf("Now the st2 is %s", myStrncpy(st, st2 ));
    return 0;
}