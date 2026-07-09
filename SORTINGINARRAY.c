/*
aim - sorting of elements in array
date - 12th june 2026
*/

#include<stdio.h>
int main()

{
 int a[5];
 int i;
 int j;
 int temp;
 for(i=0;i<5;i++)
  {
  printf("\n enter element");
  scanf("\n %d", &a[i]);
 }
 for(i=0;i<4;i++)
 {
  for(j=i+1;j<5;j++)
  {
   if(a[i]>a[j])
   {
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
   }
  }
 }
  {
   printf("\nsorted array:");
   for(i=0;i<5;i++)
   {
    printf("\n%d",a[i]);
   }
    return 0;
   }
}

