/* Give a point (x,y),Write a program to find out if it lies on
the X-axis,Y-axis or no the orgin*/
#include <stdio.h>
int main()
{
    float x, y;
    printf("Enter the point x : ");
    scanf("%f", &x);
    printf("Enter the point y : ");
    scanf("%f", &y);
    if (x == 0)
    {
        printf("Point lie on the y-axis");
    }
    else
    {
        if (y == 0)
        {
            printf("point lie on the x-axis");
        }
    }

    return 0;
}