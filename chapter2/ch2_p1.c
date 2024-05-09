/*if length of three sides of a tringle are input through the keyboard, Write a program to find the area of the tringle.*/
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,sp,area;
    printf("\nEnter Sides of tringle : ");
    scanf("%f %f %f",&a,&b,&c);
    sp = (a+b+c)/2;
    area = sqrt(sp*(sp-a)*(sp-b)*(sp-c));
    printf("Area of tringle = %f\n",area);
    return 0;
}