/*
TOPIC - STORAGE CLASSES
*/

#include<STDIO.H>
void msg();
int main()
{
    msg();
    msg();
    msg();
}
void msg()
{
    static int x=1; 
    printf("\nX=%d",x);
    x++;
}


/*
X=1
X=1
X=1
Static variable preserve itsself last value in multiple function call
*/
