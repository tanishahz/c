/* if value of an angle is input through the keyboard,Write a program to print all its Trigonometric ratios.*/
#include<stdio.h>
#include<math.h>
int main()
{
    float  a;
    printf("Enter the value of angle a : ");
    scanf("%f",&a);
    a = a*3.14/180;
    printf("sin = %f\n",sin(a));
    printf("cos = %f\n",cos(a));
    printf("tan = %f\n",tan(a));
    printf("cot = %f\n",1/tan(a));
    printf("sec = %f\n",1/cos(a));
    printf("cosec = %f\n",1/sin(a));
    return 0;
}