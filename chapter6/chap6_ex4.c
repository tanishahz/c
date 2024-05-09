/*Write a program to genrate all pythaorean triplets with side length less
than or equal to 30.*/
#include<stdio.h>
int main()
{
    int i,j,k;
    printf("Are all pythororian triplets.\n");
    for(i=1;i<=30;i++)
    {
        for(j=i;j<=30;j++)
        {
            for(k=j;k<=30;k++)
            {
                if(i*i + j*j == k*k || j*j + k*k == i*i || i*i + k*k == j*j)
                printf("%d, %d, %d\n",i,j,k);
            }
        }
    }
    
     return 0;
}