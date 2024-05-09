#include<stdio.h>
int main()
{
    int i,j,n=8,k;
    // printf("Entre any integer : ");
    // scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        for (k = n-1; k >= i; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            if(i==5 && j == 3)
            {
                printf("  ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}