
→ TOPIC - FUNCTIONS
→ DEFINATION - Set of Instructions. Part of Program (Sub Program)

#include<stdio.h>
#include<conio.h>

msg()   // definition
{
   printf("\nHello User");
   printf("\nWelcome in C");
   //printf("\nI am doing C");
}

int main()
{
   clrscr();

   msg(); // calling

   printf("\nC Develop by Dennis Retchie");

   msg();

   printf("\nC Develop in 1972");

   msg();

   sum(); //call

   getch();
}

sum()
{
  int n1,n2,r;
  printf("\nenter 2 nos");
  scanf("%d%d",&n1,&n2);
  r=n1+n2;
  printf("\nSum=%d",r);

}
