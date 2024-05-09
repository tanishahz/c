/*Let us now Write down the simple interest program using for.Compare this program with the one
that we wrote using while.*/
#include<stdio.h>
int main()
{
    int p,n,count;
float si,r;
    for(count = 1; count<=3;count+1)
    {
        printf("Enter the principal of amount : ");
        scanf("%d",&p);
        printf("Enter the number of years : ");
        scanf("%d",&n);
        printf("Enter the rate of interest : ");
        scanf("%f",&r);
        si = p*n*r/100;
        printf("Simple interest = Rs.%f\n",si);
    }
    return 0;
}