/*
TOPIC - SWITCH CASE 
*/

#include<stdio.h>
int main()
{
   int day;
   printf("\nenter day of the week");
   scanf("%d",&day);

   switch(day)
   {
     case 1:
      printf("\nMonday");
      break;
     case 2:
      printf("\nTuesday");
      break;
     case 3:
      printf("\nWednesday");
      break;
     case 4:
      printf("\nThursday");
      break;
     case 5:
      printf("\nFriday");
      break;
     case 6:
      printf("\nSaturday");
      break;
     case 7:
      printf("\nSunday");
      break;
     default:
      printf("\n Invalid Input - Day should be 1-7");
      break;
   }
   return 0;
}


/*
1. enter a digit and print it in word. 0 Zero, 1 One
2. enter a char and check it it vowel or consonant
*/
