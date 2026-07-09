#include<stdio.h>
#include<conio.h>
int main()
{
  int num,i;
  printf("\nenter a number");
  scanf("%d",&num);  // 5, 9

  for(i=2;i<num;i++) // 2<5=>t, 3<5, 4<5, 5<5=>f |  2<9=>t, 3
  {
      if(num%i==0)  //5%2==0=>F, 5%3==0=>F, 5%4==0=>F | 9%2=>1==0>F, 9%3=>0==0=>T
      {
	break;
      }
   }
   if(i==num) //5==5, 3==9
   {
      printf("\n%d is prime number",num);
   }
   else
   {
     printf("\n%d is not prime number",num);
   }
  return 0;
}
/*
 Print all prime numbers upto 100
*/
