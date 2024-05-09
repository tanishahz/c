/*Population of a town today is 100000.The population has increased steadily
at the rate of 10% per year for last 10 years. Write a program to determine
the population at the end of each year in the last decade.*/
#include <stdio.h>
int main()
{
    int p = 100000, dif, i;
    for (i = 1; i <= 10; i++)
    {
        dif = p * 10 / 110;
        p = p - dif;
        printf("priv year population = %d\n", p);
    }
    return 0;
}