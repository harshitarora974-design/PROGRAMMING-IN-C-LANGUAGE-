/*
aim - transpose of matrix
date - 15th june 2026
*/

#include <stdio.h>
int main()

{
    int a[3][3], i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\n enter num of matrix");
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n your matrix output is\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            /*
             printf("%d\t",a[j][i]); //interchange between i and j for transpose
            */
        }
        printf("\n");
    }
    return 0;
}
