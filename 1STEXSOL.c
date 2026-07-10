/*
SOLUTIONS OF EXERCISE ONE COMLPETE PROBLEMS INCLUDING PROBLEMS + EXPROBLEMS 
  */


  * * * *  * * * *  * * * *  * * * *     * * * *  * * * *  * 
  *     *  *     *  *     *  *     *     *        *     *  *
  * * * *  * * * *  *     *  * * * *     * * * *  *     *  *
  *        * *      *     *  *     *           *  *     *  *
  *        *   *    * * * *  * * * *  *  * * * *  * * * *  * * * *

→ SOL NO . 1.1
   #include <stdio.h>

int main()

{
    float bs,da,hra,gs;
    printf("enter basic salary (bs) of ramesh");
    scanf("%f",&bs);
    da = 0.4 * bs ;
    hra = 0.2 * bs ;
    gs =  bs + da + hra ;
    printf("ramesh basic salary (bs) is = %f\n", bs);
    printf("ramesh dearness allowance (da) is = %f\n", da);
    printf("ramesh house rent allowance (hra) is = %f\n", hra);
    printf("ramesh gross salary (gs) is = %f\n", gs);

    return 0;

}


→ SOL NO . 1.2
   #include <stdio.h>

int main()

{
    float km , m , ft , in , cm ;
    printf("enter distance in kilometers (km)");
    scanf("%f",&km);
    m = km * 1000 ;
    ft = km * 3280.84 ;
    in = km * 39370.1 ;
    cm = km * 100000 ;
    printf("distance in meters (m) = %f\n" , m);
    printf("distance in feet (ft) = %f\n" , ft);
    printf("distance in inches (in) = %f\n", in);
    printf("distance in centimeters (cm) is = %f\n", cm);

    return 0;

}


→ SOL NO . 1.3
  #include <stdio.h>

int main()

{
    float hindi, english, maths, science, sst, aggr, per;
    printf("enter your marks in 5 subjects ");
    scanf("%f%f%f%f%f", &hindi, &english, &maths, &science, &sst);
    aggr = hindi + english + maths + science + sst;
    per = aggr / 5;
    printf("your aggregate (aggr) marks are = %f\n", aggr);
    printf("your total percentage is = %f\n", per);

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
    float celsius, kelvin;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    kelvin = celsius + 273.15;

    printf("%.2f Celsius is equal to %.2f Kelvin\n", celsius, kelvin);

    return 0;

}


→ EX SOL NO . 2
   #include <stdio.h>

int main(void)

{
    int length, breadth;
    float radius;
    int perimeter;
    float area, circumference;

    printf("Enter length and breadth of rectangle:\n");
    scanf("%d %d", &length, &breadth);

    printf("Enter radius of circle:\n");
    scanf("%f", &radius);

    perimeter = 2 * (length + breadth);
    circumference = 2.0f * 3.14159f * radius;
    area = 3.14159f * radius * radius;

    printf("Perimeter of rectangle = %d\n", perimeter);
    printf("Circumference of circle = %.2f\n", circumference);
    printf("Area of circle = %.2f\n", area);

    return 0;
}
