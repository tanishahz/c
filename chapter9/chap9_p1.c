#include<stdio.h>
int main()
{
    int a =17;
    int *p;
    p = &a;
    *p = 18;
    printf("%d",a);
    return 0;
}