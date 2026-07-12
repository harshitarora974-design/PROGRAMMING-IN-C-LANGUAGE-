
→ AIM - to make one simple program to understand nested if else statement

#include <stdio.h>

int main()

    {
        int a, b, c;
        printf("enter three nums\n");
        scanf("%d%d%d", &a, &b, &c);
        if (a > b)
        {
            if (a > c)
            {
                printf("%d is greatest", a);
            }
            else
            {
                printf("%d is greatest", c);
            }
        }
        else
        {
            if (b > c)
            {
                printf("%d is greatest", b);
            }
            else
            {
                printf("%d is greatest", c);
            }
        }
        return 0;
    }

// ASSIGNMENT 

// 1. AGE OF THE PERSON IS THE INPUT , OUTPUT IS IF AGE OF PERSON GEATER THAN OR EQUAL TO 18 AND LESS THAN OR EQUAL TO 45 THEN PRINT ELIGIBLE FOR LIC POLICY 
// OTHERWISE NOT ELIGIBLE FOR LIC POLICY 
   
