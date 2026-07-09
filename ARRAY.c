#include<stdio.h>
int main()
{
   int a[5];
   int i;
   

   for(i=0;i<5;i++)  // 0,1,2,3,4
   {
     printf("\nenter element %d: ",i+1);
     scanf("%d",&a[i]);
   }

   printf("\n Your Array elements are:");
   for(i=0;i<5;i++)
   {
     printf("\n%d",a[i]);
   }
   return 0;
}
/*
enter 10 elements in array and print sum of its element.
enter 10 elements in array and print it in reverse order
enter 10 element in array and print biggest element
enter 10 elements in array and search an element
*/