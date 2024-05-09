#include<stdio.h>
int main()
{
    long long int n , i;
    char str[11];
    printf("enter the number  n : ");
    scanf("%d",&n);
    for(i=0;i<10;i++)
    {
        str[i] = n%10 + 48 ;
        n=n/10;
    }
    str[10] = '\0';
    printf("%s",str);
    return 0;
}