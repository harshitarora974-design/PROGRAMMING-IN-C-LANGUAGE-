/*
aim - to do sum of two matrix
date 15th june 2026
*/

#include <stdio.h>
int main()

{
       int a[3][3], b[3][3], c[3][3];
       int i, j;
       for (i = 0; i < 3; i++)
       {
              for (j = 0; j < 3; j++)
              {
                     printf("\n ENTER YOUR MATRIX ELEMENTS ");
                     scanf("%d", &a[i][j]);
              }
       }
       for (i = 0; i < 3; i++)
       {
              for (j = 0; j < 3; j++)
              {
                     printf("\n ENTER SECOND MATRIX ELEMENTS\n");
                     scanf("%d", &b[i][j]);
              }
       }
       printf("\n TOTAL SUM OF TWO MATRIX IS\n");
       for (i = 0; i < 3; i++)
       {
              for (j = 0; j < 3; j++)
              {
                     c[i][j] = a[i][j] + b[i][j];
                     printf("%d\t", c[i][j]);
              }
              printf("\n");
       }
       return 0;
}
