#include<stdio.h>
int main()
{
    int d,m,y;
    printf("Enter the date dd-mm-yyyy : ");
    scanf("%d%*c%d%*c%d",&d,&m,&y);
    printf("%d-%d-%d",d,m,y);
    return 0;
}