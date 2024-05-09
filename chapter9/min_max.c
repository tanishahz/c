#include<stdio.h>
#include<tannur.h>
#include<tannuv.h>
int main()
{
    int a,b,c;
    printf("Enter the two values : ");
    scanf("%d %d",&a,&b);
    c = min(a,b);
    printf("Maximum value = %d",c);
    return 0;
}