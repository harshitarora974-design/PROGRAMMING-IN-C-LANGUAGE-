
→ AIM - variables 
→ DEFINATION - a variable is a named memory location that can store a value of a specific data type.
             → integers = %d(written simply)
             → characters = %c(written in '#')
             → floats = %f(written in decimals)

#include <stdio.h>

int main()
{
    // declaration and assignment 
    int a = 10;
    char b = 'A';
    float c = 3.14;
    // using

    printf("Integer: %d\n", a);
    printf("Character: %c\n", b);
    printf("Float: %.2f\n", c);

    return 0;
}
