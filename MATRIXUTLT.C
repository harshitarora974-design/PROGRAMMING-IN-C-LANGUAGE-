/*
aim - left/right both diagonal elements of matrix
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
      if (i <= j) // for upper triangular elements including diagonal
      */
     /*
      if (i >= j) // for lower triangular elements including diagonal
      */
        printf("%d\t", a[i][j]);
      else
        printf("\t");
    }
    printf("\n");
  }
  return 0;
}
