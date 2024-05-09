/*Write a program to prime number or not.*/
#include<stdio.h>
int main()
{
    int count,num=1,i;
    while(num<=100)
    {
        count =0;i=1;
        while(i<=num)
        {
            if(num%i==0)
            count++;
            i++;
        }
        if(count==2)
        printf("%d ",num);
        num++;
    }
    return 0;
}