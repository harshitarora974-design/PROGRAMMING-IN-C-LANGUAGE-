/*
TOPIC -CONTINUE STATEMENT 
*/

#include<stdio.h>
#include<conio.h>

int main()
{
   int i;
   for(i=1;i<=10;i++)
   {
       if(i==5 || i==7)
       {
	 continue;
       }
       printf("\n%d",i);
   }
   return 0;
}

/*
i      for condition    if condition   print
---
1         T               F  F          1
2         T               F F           2
3         T               F F           3
4         T               F F           4
5         T               T F
6         T               F F		6
7         T               F T
8         T               F F           8
9         T               F F           9
10        T               F F           10
11        F
*/

/*
print all possible combination of 1 2 3
*/
