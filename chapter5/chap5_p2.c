/* We may wish to calculate simple interest for 3 set of values of principal,number of years
 and rate of interest.Here is the program that can achiee this*/
#include<stdio.h>
int main()
{
    int p,n,count;
    float r,si;
    count = 2;
    while(count<=4)
    {
        printf("Enter the principal of amount : ");
        scanf("%d",&p);
        printf("Enter the number of years : ");
        scanf("%d",&n);
        printf("Enter the rate of interest : ");
        scanf("%f",&r);
        si = p*n*r/100;
        printf("Simple interest = Rs%f\n",si);
        count = count +1; 
    }
    return 0;
}