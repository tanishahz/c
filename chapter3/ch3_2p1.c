/* if cost price and selling price of an item is input through the keyboard the keyboard, Write a
a program to determine whether the seller has made profit or incurred loss.
Also thetermine how much profit he made or loss he incurred.*/
#include <stdio.h>
int main()
{
    float pp, sp, p, l;
    printf("Enter the puchasing price : ");
    scanf("%f",&pp);
    printf("Enter the Salling price : ");
    scanf("%f",&sp);
    p = sp - pp;
    if(p>0)
    {
        printf("Seller got profit %.2frs\n",p);
    }
    if(p<0)
    {
        printf("Seller got loss %.2frs\n",-1*p);
    }
    if(p==0)
    {
        printf("Seller got no profit no loss");
    }
    return 0;
}