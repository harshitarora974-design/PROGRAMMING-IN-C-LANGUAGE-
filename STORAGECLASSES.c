
→ TOPIC - STORAGE CLASSES

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
