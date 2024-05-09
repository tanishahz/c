/*Write a program to find the absolute value of a number entered through the keyboard.*/
#include<stdio.h>
int main()
{
    int a;
      printf("Enter the value : ");
      scanf("%d",&a);
    if(a>0)
    {
      printf("The absolute value of entred number %d ",a);
    }
    else
    if(a<0)
    {
        printf("The absoute value of entred %d",-1*a);
    }
    return 0;
}