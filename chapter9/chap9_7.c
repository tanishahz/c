#include<stdio.h>
void fun()
{
    int a,b,c;
    printf("Enter  too any number : ");
    scanf("%d %d\n",&a,&b);
    c = a+b;
    printf("sum = %d\n",c);
}
int main()
{
    fun();
    fun();
   return 0;
}