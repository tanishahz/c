
#include <stdio.h>
int main()
{
    int a, b,div,mul,sum, i;
    i = 4;

    while (i >= 1)
    {
        printf("Enter the value a : ");
        scanf("%d", &a);
        printf("Enter the value b : ");
        scanf("%d", &b);
        div = a/b;
        mul = a*b;
        sum = a + b;
        printf("div = %d\n", div);
        printf("mul = %d\n", mul);
        printf("Sum = %d\n", sum);

        i -= 1;
    }

    return 0;
}