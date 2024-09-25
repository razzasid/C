# include<stdio.h>
# include<string.h>

struct bankac
{
    char name[20];
    long long int acnum;
    int yrofopen;
    float amnt;
};

int main()
{
    struct bankac cus1;
    strcpy(cus1.name, "Mohd Raza");
    cus1.acnum = (32189029839483);
    cus1.yrofopen = 2020;
    cus1.amnt = 100.00;
    
    struct bankac cus2;
    strcpy(cus2.name, "Harry");
    cus2.acnum = 32189073567128;
    cus2.yrofopen = 2009;
    cus2.amnt = 250.76;

    struct bankac cus3 = {"haris", 3218902467898, 2010, 280.99 };
    // strcpy(cus3.name, "Haris");
    // cus3.acnum = 3218902467898;
    // cus3.yrofopen = 2010;
    // cus3.amnt = 5,60,560.00;
    
    printf("Account Holder name of a custumer 1 is %s\n", cus1.name);
    printf("Account number of a custumer 1 is %lli\n", cus1.acnum);
    printf("Account year of Open of custumer 1 is %d\n", cus1.yrofopen);
    printf("Amount in account of custumer 1 is $%.2f\n\n", cus1.amnt);

    printf("Account Holder name of a custumer 2 is %s\n", cus2.name);
    printf("Account number of a custumer 2 is %lli\n", cus2.acnum);
    printf("Account year of Open of custumer 2 is %d\n", cus2.yrofopen);
    printf("Amount in account of custumer 2 is $%.2f\n\n", cus2.amnt);

    printf("Account Holder name of a custumer 3 is %s\n", cus3.name);
    printf("Account number of a custumer 3 is %lli\n", cus3.acnum);
    printf("Account year of Open of custumer 3 is %d\n", cus3.yrofopen);
    printf("Amount in account of custumer 3 is $%.2f\n", cus3.amnt);

    
    return 0;
}