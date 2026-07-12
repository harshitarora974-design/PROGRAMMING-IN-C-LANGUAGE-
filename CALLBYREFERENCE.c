
→ TOPIC -Call By Reference
          if any change in formal parameter it affects actual  paramater

#include<stdio.h>

void fun(int*);
int main()
{
  int a=10;
  
  printf("\nBefore call of fun A=%d",a);
  fun(&a); // a is actual parameter
  printf("\nAfter Call of Fun A=%d",a);
  return 0;
}
void fun(int *x)  // x is formal parameter
{
  *x=100;
}

/*
Swaping of 2 nos using call by reference
*/
