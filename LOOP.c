/*
aim - to demonstrate loops in C
defination - a loop is a sequence of instructions that is continually repeated until a certain condition is reached.
*/

#include <stdio.h>

int main()
/*
{
    int i;
    for (i = 1; i <= 5; i++)
    {
        printf("\nhello user");
    }

    return 0;
}
*/

/*
   * * * *  * * * *  * * * *  * * * *  *        * * * *  ********  * * * *      
   *     *  *     *  *     *  *     *  *        *        *  **  *  * 
   * * * *  * * * *  *     *  * * * *  *        * * * *  *  **  *  * * * *
   *        * *      *     *  *     *  *        *        *      *        *
   *        *   *    * * * *  * * * *  * * * *  * * * *  *      *  * * * *  
*/

/*
aim - to print hello user 5 times along with serial wise numbering
*/

/*
{
    int i;
    for(i=1;i<=5;i++)
    {
        printf("%d. hello user\n", i);
    }

    return 0;
}
*/

// aim - to print counting from 1 to 10  

/*
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}
*/

// aim - to print nums like 2 4 6 8 10

/*
{
    int i;
    for(i=2;i<=20;i+=2)
    {
        printf("%d\n", i);
    }
    return 0;
}
*/

// aim - to print nums like 1 2 4 8 16 32 64 128 256 512

/*
{
    int i;
    for(i=1;i<=512;i*=2)
    {
        printf("%d\n", i);
    }

    return 0;
}
*/

// aim - to print nums like 1 4 9 16 25 36 49 64 81 100
/*
{
    int i;
    for(i=1;i<=10;i++)
    {
        printf("%d\n", i*i);
    }

    return 0;
}
*/

// aim - to print sum of all nums upto 10 like 1+2+3+4+5+6+7+8+9+10

/*
{
    int i;
    int sum = 0;
    
    for (int i = 1; i <= 10; i++) 
    {
        if (i > 1) 
        {
            printf("+");
        }
        printf("%d", i);
        sum += i;
    }
    
    printf(" = %d\n", sum);
    return 0;
}
*/

// aim - to print product of all nums upto 10 like 1*2*3*4*5*6*7*8*9*10

/*
{
    int i; 
    int product = 1;
    for(i=1;i<=10;i++)
    {
        if(i>1)
        {
            printf("*%d", i);
        }
        else
        {
            printf("\t");
        }
        product *= i;
    }
    printf(" = %d\n", product);
    return 0;
}
*/