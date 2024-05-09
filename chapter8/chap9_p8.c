/*Write a general-purpose function to convert any given year into its Roman
equivalent.Use these Roman equivalents for decimal numbers: 1-I,5-V,10-X
,50-L,100-C,500-D,100-M.
Example:
Roman equivalent of 1988 is mdcccclxxxviii.
Roman equivalent of 1525 is mdxxv.*/
#include<stdio.h>
int romanise(int,int,char);
int main()
{
    int yr;
    printf("Enetr year : ");
    scanf("%d",&yr);
    yr = romanise(yr,1000,'m');
    yr = romanise(yr,500,'d');
    yr = romanise(yr,100,'c');
    yr = romanise(yr,50,'l');
    yr = romanise(yr,10,'x');
    yr = romanise(yr,5,'v');
     romanise(yr,1,'i');
    return 0;
}
int romanise (int y,int k,char ch)
{
    int i,j;
    j = y/k;
    for(i=1;i<=j;i++)
    printf("%c",ch);
    return(y-k*j);
}