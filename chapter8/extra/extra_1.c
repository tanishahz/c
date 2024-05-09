/*Write a C program to find the factorial of a given number using a function.*/
#include<stdio.h>
int fact(int);
int main()
{
    int num;
    int factorial;
    printf("Enter the any number : ");
    scanf("%d",&num);
    factorial = fact(num);
    printf("factorial %d = %d\n",num,factorial);
    return 0;
}
int fact(int num)
{
    int i;
    int factorial = 1;
    for (i=1;i<=num;i++)
    factorial = factorial*i;
    return(factorial);
}
