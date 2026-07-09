/*
aim - nested loop
defination - a loop inside another loop is called nested loop
*/

#include <stdio.h>

int main()
    /* to print stars like ***
     ***
     ***
     */
    /*
    {
        int i, j;

        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("*");
            }
            printf("\n");
        }

        return 0;
    }
    */

    /*// aim - to print stars like *
     **
     ***
     ****
     *****
     */

    /*
    {
        int i,j;
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                if(j<=i)
                {
                    printf("*");
                }
            }
            printf("\n");
        }
    }
    */

    /*
    aim - to print numbering like  1
                                   12
                                   123
                                   1234
                                   12345
    */

    /*
    {
        int i, j;

        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 5; j++)
            {
                if (j <= i)
                {
                    printf("%d", j + 1);
                }
            }
            printf("\n");
        }
    }
    */