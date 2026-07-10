/*
SOLUTIONS OF EXERCISE TWO COMLPETE PROBLEMS INCLUDING PROBLEMS + EXPROBLEMS 
*/


  * * * *  * * * *  * * * *  * * * *     * * * *  * * * *  * 
  *     *  *     *  *     *  *     *     *        *     *  *
  * * * *  * * * *  *     *  * * * *     * * * *  *     *  *
  *        * *      *     *  *     *           *  *     *  *
  *        *   *    * * * *  * * * *  *  * * * *  * * * *  * * * *


→ SOL NO . 4.1
    #include <stdio.h>

int main(void)

{
  int hindi, english, maths, sst, sci, per;
  printf("\nenter marks in 5 subjects");
  scanf("%d%d%d%d%d", &hindi, &english, &maths, &sst, &sci);
  per = (hindi + english + maths + sst + sci) / 5;

  printf("\ntotal percentage is = %d\n" , per);

  if (per >= 60)
    printf("\nfirst division\n");
  if( (per >= 50)&&(per < 60) ) 
        printf("\nsecond division\n");
  if( (per >= 40)&&(per < 50) )
        printf("\nthird division\n");
  if (per < 40)
    printf("\nfail\n");

  return 0;
}


→ SOL NO . 4.2
  #include<stdio.h>

int main(void)

{
  char g ;
  int yos , qual , sal = 0 ;
  printf("\nenter gender ( m = male , f = female ) , year of service ( yos ) , qualification( 0 = graduate , 1 = post-graduate)\n");
  scanf("%c%d%d" , &g , &yos , &qual);

  if(g == 'm' && yos >= 10 && qual == 1)
     sal = 11000;
  if(g == 'm' && yos >= 10 && qual == 0)
     sal = 10000;
  if(g == 'm' && yos <10 && qual == 1)
     sal = 10000;
  if(g == 'm' && yos <10 && qual == 0)
     sal = 7000;
  if(g == 'f' && yos >= 10 && qual == 1)
     sal = 12000;
  if(g == 'f' && yos >= 10 && qual == 0)
     sal = 9000;
  if(g == 'f' && yos <10 && qual == 1)
     sal = 10000;
  if(g == 'f' && yos <10 && qual == 0)
     sal = 6000;
  
  printf("\nsalary of employee = %d\n" , sal);

  return 0;

}


  * * * *  *     *     * * * *  * * * *  *
  *          * *       *        *     *  *
  * * * *     *        * * * *  *     *  * 
  *          * *             *  *     *  *
  * * * *  *     *  *  * * * *  * * * *  * * * *


→ EX SOL NO . 1
    #include <stdio.h>

int main(void)
{
    int x, y, z;

    printf("Enter 1st, 2nd and 3rd sides of triangle: ");
    scanf("%d %d %d", &x, &y, &z);

    if (x == y && y == z)
    {
        printf("The triangle is equilateral.\n");
    }
    else if (x == y || y == z || z == x)
    {
        printf("The triangle is isosceles.\n");
    }
    else
    {
        printf("The triangle is scalene.\n");
    }

    return 0;
}

