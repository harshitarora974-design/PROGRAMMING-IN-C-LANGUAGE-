
→ TOPIC - POINTER 

  #include <stdio.h>

int main()
{
  float x = 10;
  float *ptr;
  printf("\nX=%f", x);
  printf("\nAddress of X=%u", &x); //& address of operator
  // if you know the address then how you can get value on that address
  // Ans. We use Value At Address operator to get address (*)
  printf("\nX=%f", *&x);
  // pointer variable - it is a special variable that can hold address of another variable

  ptr = &x; // address of x stored into ptr

  printf("\nAddress of X=%u", ptr);
  printf("\nValue of X=%f", *ptr);

  *ptr = 100;
  printf("\nValue of X=%f", x);
  return 0;
}
