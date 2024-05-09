/*when interest compounds q times per year at an annual rate of r% for n years
,the principal p compound to an ammount a as per the following formula 
a = p(1+r/q)^nq
Write a program to read 10 sets of p,r,n,&q and calculat the corresponding as.*/
#include<stdio.h>
#include<math.h>
int main()
{
    float i,q,p,n,r,a;
    for(i=1;i<=10;i++)
    {
        printf("Enter the principle of amount : ");
        scanf("%f",&p);
        printf("Enter the rate of intresert : ");
        scanf("%f",&r);
        printf("Enter the no. of year : ");
        scanf("%f",&n);
        printf("Enter the compaound time : ");
        scanf("%f",&q);
        a =pow(p*(1+r/q),n*q);
        printf("Amount = %f\n",a);
    }
    return 0;
}