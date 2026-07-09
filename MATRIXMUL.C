/*
aim - product of two matix
date - 16th june 2026
*/

#include <stdio.h>
int main()

{
  int a[3][3], b[3][3], c[3][3];
  int i, j, k;
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("\n ENTER ELEMENTS OF 1ST MATRIX");
      scanf("%d", &a[i][j]);
    }
  }
  printf("\n ENTER ELEMENTS OF 2ND MATRIX");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      scanf("%d", &b[i][j]);
    }
  }
  printf("\n PRODUCT OF MATRIX A AND B IS\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      c[i][j] = 0;
      for (k = 0; k < 3; k++)
      {
        c[i][j] = c[i][j] + a[i][k] * b[k][j]; // for product of two matrix
      }
      printf("%d\t", c[i][j]);
    }
    printf("\n");
  }
  return 0;
}