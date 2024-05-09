/*Given the length and breath of a rectangle , write a program to find whether the area of the 
rectangle is greater than its perimeter . for example , the area of the rectangle with 
length = 5 and  breath = 4 is greater than its perimeter.*/
#include<stdio.h>
int main()
{
    int l,b,a,p;
    printf("Enter the length of rectangle : ");
    scanf("%d",&l);
    printf("Enter the breath of rectangle : ");
    scanf("%d",&b);
    a = l*b;
    p = 2*(l+b);
   if(a>p)
   {
    printf("Area is greater than parimeter ");
   }
   else
   {
    printf("Area is not greater than parimeter ");

   }
    return 0;
}