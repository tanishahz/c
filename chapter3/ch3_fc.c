/*Write a program to check whether a tringle is valid or not ,when the three angles of the
tringle are entred through the keyboard. A tringle is valid if the sum of all the three angles
is equal to 180 degrees.*/
#include <stdio.h>
int main()
{
    int a, b, c, sum;
    printf("Enter the angle a of tringle : ");
    scanf("%d",&a);
    printf("Enter the angle b of tringle : ");
    scanf("%d",&b);
    printf("Enter the angle c of tringle : ");
    scanf("%d",&c);
    sum = a + b + c;
    if (sum == 180)
        printf("Tringle is valid");
    else
        printf("tringle is not valid");
    return 0;
}