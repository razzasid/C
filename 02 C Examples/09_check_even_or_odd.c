// # include<stdio.h>

// int main()
// {
//     int num;
//     printf("Enter an integer: \n");
//     scanf("%d", &num);

//     // true if num is perfectly divisible by 2
//     if (num % 2 == 0){
//         printf("%d is Even\n", num);
//     }
//     else{
//         printf("%d is odd\n", num);
//     }
//     return 0;
// }

// Program to Check Odd or Even Using the Ternary Operator

#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    (num % 2 == 0) ? printf("%d is even.", num) : printf("%d is odd.", num);
    return 0;
}