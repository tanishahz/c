#include <stdio.h>
void fun1();
void fun2();
int main()
{
    fun1();
    fun2();
    return 0;
}
void fun1()
{
    int a, b, sum;
    printf("Enter the value a : ");
    scanf("%d", &a);
    printf("Enter the value b : ");
    scanf("%d", &b);
    sum = a + b;
    printf(" sum of a and b : %d\n", sum);
}
void fun2()
{
    int a, b, sub;
    printf("Enter the value a : ");
    scanf("%d", &a);
    printf("Enter the value b : ");
    scanf("%d", &b);
    sub = a - b;
    printf(" subtraction of a and b : %d\n", sub);
}