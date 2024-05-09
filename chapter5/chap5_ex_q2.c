/*Write a program to print out all Armstrong numbers between 1 and 500.if sum of cubes of each
digit of the number is equal to the numbers itself,then number is called an Armstrong number.For
example,153=(1*1*1)+(5*5*5)+(3*3*3).*/
#include<stdio.h>
int main()
{
    int n1,n2,n3,i = 2;
    while(i<=500)
    {
        
        n1 = i/100;
        n2 = i%100;
        n2 = n2/10;
        n3 = i%10;
        if(n1*n1*n1+n2*n2*n2+n3*n3*n3==i)
        printf("%d is a armstrong number\n",i);
        i++;
    }
    return 0;
}