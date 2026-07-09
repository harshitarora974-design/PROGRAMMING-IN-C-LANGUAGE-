/*
aim - structure
date - 17th june 2026
*/

#include<stdio.h>
struct book

{
 char name[50];
 int year;
 int sno;
 float price;
};

int main()

{
 struct book b1={"let us c",1989,59,2500.25};
 struct book b2;
 printf("\nenter name year sno and price of the book");
 scanf("%s%d%d%.2f",b1.name,&b1.year,&b1.sno,&b1.price);
 printf("\nyour book details are");
 printf("\nname\t\tyear\tsno\tprice");
 printf("\n%s\t\t%d\t%d\t%.2f",b1.name,&b1.year,&b1.sno,&b1.price);
 printf("\n%s\t\t%d\t%d\t%.2f",b2.name,&b2.year,&b2.sno,&b2.price);
 return 0;
}
