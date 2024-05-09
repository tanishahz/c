/*Write a program to receive value of an angle in degrees and check whether sum of squares of 
sine and consine of this angle is equal to 1.*/
#include<stdio.h>
#include<math.h>
int main()
{
    int d,r;
    printf("Enter the degree of angle : ");
    scanf("%d",&d);
    r = (sin(d)*sin(d)+cos(d)*cos(d));
    printf("Result is %d",r);
    return 0;
}