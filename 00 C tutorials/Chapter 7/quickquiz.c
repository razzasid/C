#include <stdio.h>

void printarray(int td_arr[][])
{
    int m = 3, n = 2;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("The Value of  %d row and %d column is: %d\n", i + 1, j + 1, td_arr[i][j]);
        }
    }
}

int main()
{
    int n_row = 3, n_column = 2;

    int Td_arr[3][2];

    for (int i = 0; i < n_row; i++)
    {
        for (int j = 0; j < n_column; j++)
        {
            printf("Enter the value of %d row of %d column\n", i + 1, j + 1);
            scanf("%d", &Td_arr[i][j]);
        }
    }
    printarray(Td_arr[][]);
    return 0;
}