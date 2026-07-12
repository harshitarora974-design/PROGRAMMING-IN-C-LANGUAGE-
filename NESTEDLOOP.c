
→ AIM - nested loop
→ DEFINTION - a loop inside another loop is called nested loop

 1. to print stars like : ***
                          ***
                          ***
    
#include <stdio.h>

int main()
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

// ASSIGNMENTS 

1.  to print stars like 
     *
     **
     ***
     ****
     *****
     
2.  to print stars like 
    *****
    ****
    ***
    **
    *
   
3. to print numbering like :       1
                                   12
                                   123
                                   1234
                                   12345

4. to print numbering like :       12345
                                   1234
                                   123
                                   12
                                   1/
