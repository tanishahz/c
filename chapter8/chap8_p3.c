#include<stdio.h>
void fun1();
void main()
{
   fun1();
    return 0;
}
void fun1()
{
    int a,b,c,sum;
    printf("Enter the number a and b : ");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        printf("A is big : ");
    }
    else
    {
        printf(" b is big : ");
    }
    sum=a+b;
    printf("%d",sum);
}