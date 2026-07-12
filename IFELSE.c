
→ AIM - if else statement
→ DEFINATION - if else is a conditional statement that allows the program to make decisions based on a condition.

#include <stdio.h>

int main()


{
    int a, b;
    printf("enter two nums\n");
    scanf("%d%d", &a, &b);
    if (a > b)
    {
        printf("%d is greater than %d", a, b);
    }
    else
    {
        printf("%d is greater than %d", b, a);
    }

    return 0;
}

