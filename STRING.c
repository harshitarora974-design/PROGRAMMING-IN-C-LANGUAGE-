
→ TOPIC - STRING

#include<stdio.h>
#include<string.h>
int main()

{
  char name [50];
  char *str="Hello";
  int i;

  printf("\nenter your name:");
  //scanf("%s",name);
  gets(name);

  printf("\nHello %s",name);

   for(i=0;name[i]!='\0';i++)
    {
     printf("\n %c",name[i]);

     printf("\n %s is %d char long",name,i);

     printf("\n %s is in rev order",name);

     for(i=i-1;i>=0;i--)
     {
      printf("%c",name[i]);
     }
     return 0;
 }
}
