/*Write a program to find the greatest of the three numbers entered through the keyboard.
Use conditional operators.*/
#include<stdio.h>
int main()
{
    int a,b,c,big;
    printf("Enter the 3 numbers : ");
    scanf("%d %d %d",&a,&b,&c);
    big = (a>b && a>c? b:c);
    printf("The biggest number is :%d",big);
    return 0;
}