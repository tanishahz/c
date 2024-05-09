/*Create a program in C to check whether a given number is prime or not using a function.*/
#include<stdio.h>
void prime(int x);
int main()
{
    int num;
    printf("Enter the number!");
    scanf("%d",&num);
    prime(num);
    return 0;
}
void prime(int x)
{
    int i,count=0;
    for(i=1;i<=x;i++)
    {
        if(x%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("Prime Number");
    }
    else
    {
        printf("Not a prime number");
    }
}
