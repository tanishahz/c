/*Write a program to add first seven term of the following series using a for loop.
1/1!+2/2!+3/3!+...........*/
#include<stdio.h>
int main()
{
    int i = 1,j;
    float fact,sum=0.0;
    for(i=1;i<=7;i++)
    {
        fact = 1.0;
        for(j=1;j<=i;j++)
        fact = fact*j;
        sum = sum+i/fact;
    }
    printf("Sum of series = %f\n",sum);
    return 0;
}