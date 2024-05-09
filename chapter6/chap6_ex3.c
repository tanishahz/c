`
#include<stdio.h>
#include<math.h>
int main()
{
    int i;
    float x;
    printf("Enter the value X : ");
    scanf("%f",&x);
    float sum = (x-1)/x,a;
    for(i=2;i<=7;i++)
    {
        a=0.5*pow((x-1)/x,i);
        printf("sum = %f\n",sum);
        sum = sum+a;

    }
    printf("sum = %f",sum);
    return 0;
}