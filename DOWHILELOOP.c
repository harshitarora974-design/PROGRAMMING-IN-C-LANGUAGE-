/*
TOPIC - DO WHILE LOOP 
*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int n1,n2,r,choice;

    do
    {
      printf("\nenter 2 nos");
      scanf("%d%d",&n1,&n2);
      r=n1+n2;

      printf("\nSum=%d",r);

      printf("\nEnter 1 for Sum and Other key to exit");
      scanf("%d",&choice);
    }while(choice==1);
}
/*
Assignment :

1. Sum
2. Subtract
3. Product
4. Division
5. Exit
*/
