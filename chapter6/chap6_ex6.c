/*Write a program to print 24 hours of day with suitable suffixes like AM,
PM,Noon and midnight.*/
#include <stdio.h>
int main()
{
    int i, j, num = 1, space, term, temp;
    printf("Enter the term = ");
    scanf("%d", &term);
    temp = term;
    for (i = 1; i <= term; i++)
    {
        for (space = temp; space >= 1; space--)
        {
            printf(" ");
        }
        temp--;
        for (j = 1; j <= i; j++)
        {
            if (num > 0 && num < 10)
            {
                printf("0%d ", num);
            }
            else
            {
                printf("%d ", num);
            }

            num++;
        }
        printf("\n");
    }
    return 0;
}
