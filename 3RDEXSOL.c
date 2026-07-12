
→ SOLUTIONS OF EXERCISE ONE COMLPETE PROBLEMS INCLUDING PROBLEMS + EXPROBLEMS 


  * * * *  * * * *  * * * *  * * * *     * * * *  * * * *  * 
  *     *  *     *  *     *  *     *     *        *     *  *
  * * * *  * * * *  *     *  * * * *     * * * *  *     *  *
  *        * *      *     *  *     *           *  *     *  *
  *        *   *    * * * *  * * * *  *  * * * *  * * * *  * * * *


→ SOL NO . 3.1
    #include <stdio.h>

int main()

{
    float mrp,dis=0,net_price;
    printf("\nenter mrp of the book");
    scanf("\n%f",&mrp);
    if(mrp>1000)
    {
         dis=mrp*10/100;
    }
    else
    {
        dis=mrp*5/100;
    }

    net_price = mrp-dis;
    printf("\nmrp = %f\ndis = %f\nnet price = %f",mrp,dis,net_price);

    return 0;
}


→ SOL NO . 3.2
  #include <stdio.h>

int main()

{
    float bs , hra , da , gs ;
    printf("enter basic salary (bs)");
    scanf("%f", &bs);
    if(bs<1500)
    {
        hra = 0.1 * bs ;
        da = 0.9 * bs ;
    }
    else
    {
        hra = bs + 500 ;
        da = 0.98 * bs ;
    }
    gs = bs + hra + da ;
    printf("gross salary = %f\n", gs);

    return 0;

}


→ SOL NO . 3.3
  #include <stdio.h>

int main()

{
    float cp, sp, p, l;
    printf("enter cost price (cp) and selling price (sp)");
    scanf("%f%f", &cp, &sp);
    p = sp - cp;
    l = cp - sp;
    if (p > 0)
        printf("you have gained a profit in deal = %f\n", p);
    if (l > 0)
        printf("you have gained loss in deal = %f\n", l);
    if (p == 0)
       printf("no profit , no loss deal\n");

    return 0;
}


→ SOL NO . 3.4
  #include <stdio.h>

int main()

{
    int n ;
    printf("enter the number ");
    scanf("%d", &n);
    if(n%2 == 0)
       printf("the entered number is even", n);
    else
       printf("the entered number id odd", n);

    return 0;

}


→ SOL NO . 3.5
  #include <stdio.h>

int main()

{
    int yr;
    printf("enter year");
    scanf("%d", &yr);
    if (yr % 100 == 0)
    {
        if (yr % 400 == 0)
            printf("its a leap year\n");
        else
            printf("its not a leap year\n");
    }
    else
    {
        if (yr % 4 == 0)
            printf("its a leap year\n");
        else
            printf("its not a leap year\n");
    }

    return 0;
}


  * * * *  *     *     * * * *  * * * *  *
  *          * *       *        *     *  *
  * * * *     *        * * * *  *     *  * 
  *          * *             *  *     *  *
  * * * *  *     *  *  * * * *  * * * *  * * * *


→ EX SOL NO . 1
    #include <stdio.h>

int main()
{
    int num, original, reversed = 0, digit;

    printf("enter a 5-digit number: ");
    scanf("%d", &num);

    original = num;

    if (num >= 10000 && num <= 99999)
    {
        while (num > 0)
        {
            digit = num % 10;
            reversed = reversed * 10 + digit;
            num = num / 10;
        }

        if (original == reversed)
            printf("the number and its reverse are equal\n");
        else
            printf("the number and its reverse are not equal\n");
    }
    else
    {
        printf("please enter a 5-digit number\n");
    }

    return 0;
}


→ EX SOL NO . 2
  #include <stdio.h>

int main()

{
    int ram , sham , ajay ;

    printf("enter age of ram , sham and ajay ");
    scanf("%d%d%d",&ram, &sham , &ajay);
    if(ram <= sham &&  ram <= ajay)
      printf("ram is the youngest\n" , ram);
    else if(sham <= ram && sham <= ajay)
      printf("sham is the youngest\n" , sham);
    else
      printf("ajay is the youngest\n", ajay);

    return 0;

}


→ EX SOL NO . 3
  #include <stdio.h>

int main()

{
    int x, y, z;
    printf("enter three angles ( x , y , z ) of triangle ");
    scanf("%D%d%d", &x, &y, &z);
    if (x + y + z == 180)
        printf("it is a triangle");
    else
        printf("not a triangle");

    return 0;
}


→ EX SOL NO . 4
  #include <stdio.h>

int main(void)

{
    int length, breadth;
    float area , perimeter;  

    printf("Enter length and breadth of rectangle:\n");
    scanf("%d %d", &length, &breadth);

    perimeter = 2 * (length + breadth);
    area = length * breadth;

    printf("Perimeter of rectangle = %f\n", perimeter);
    printf("Area of rectangle = %.2f\n", area);
    if(area > perimeter)
       printf("\narea is greater than perimeter\n" , area);
    else
       printf("\nperimeter is greater than area\n" , perimeter);   

    return 0;
}

