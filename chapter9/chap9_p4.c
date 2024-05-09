/*Write a C function to evaluate the series sin(x)= x-(x^3/3!)+(x^5/5!)-(x^7/7!)+...
 up to 5 significant digits.*/
#include<stdio.h>
#include<math.h>
float numerator(float,int);
float denominator(int);
int main()
{
    float x,n,d,term,sum,oldsum;
    int i,j;
    printf("Enter the number x : ");
    scanf("%f",&x);
    i=j=1;
    sum = 0;
    while(1)
    {
        n = numerator(x,j);
        d = denominator(j);
        term = n/d;
        oldsum = sum;
        (i%2 == 0)?sum=sum-term:(sum=sum+term);
        if(abs(sum-oldsum)<0.00001)
        break;
        i++;
        j+=2;
    }
    printf("sum = %f\n",sum);
    return 0;
}
float numerator (float y,int j)
{
    float k = 1;
    int m;
    for(m=1;m<=j;m++)
    k*=y;
return(k);
}
float denominator(int j)
{
    int m;
    float h = 1;
    for(m = 1; m<=j;m++)
        h = h*m;
    return(h);
}