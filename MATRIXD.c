
→ AIM - left/right both diagonal elements of matrix

#include <stdio.h>
int main()

{
    int a[3][3], i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\n ENTER MATRIX ELEMENTS");
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n YOUR OBTAINED MATRIX\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            /*
             if(i+j==2) // for right diagonal elements
            */
            /*
            if(i==j) // for left diagonal elements
            */
            printf("%d\t", a[i][j]);
            else 
               printf("\t");
        }
        printf("\n");
    }
    return 0;
}
