#include<stdio.h>
int main()
{
    int i,j,n,k;
    printf("Entre any integer : ");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        for (k = 8; k >= i; k--)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}