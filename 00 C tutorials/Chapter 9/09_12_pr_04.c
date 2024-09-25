#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[20];
};

int main(){
    struct employee e1;
    struct employee *ptr;

    ptr = &e1;
    (*ptr).code = 101;
    printf("Before arrow operator %d\n",e1.code);

    ptr->code = 101;
    printf("After arrow operator %d\n", e1.code); 

    return 0;
}