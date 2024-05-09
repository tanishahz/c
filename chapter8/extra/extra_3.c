/*Create a program in C to check whether a given number is prime or not using a function.*/
#include<stdio.h>
void prime(int x);
int main()
{
    int i,count=0,x=1;
    while(x<=100)
    {
        count=0;
        for(i=1;i<=x;i++)
    {
        if(x%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("%d ",x);
    }
        x++;
    }
    return 0;
}
