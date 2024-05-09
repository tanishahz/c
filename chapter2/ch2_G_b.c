/*Write a program to receive Cartesian co-ordinates (x,y)of a point and convert them into polar co-ordinate(r,thetha).
hint: r=sqrt ( (x^2)+(y^2)) and thetha = tan(a)(y/x)*/
#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;
    float r,thetha;
    printf("Enter the certesian co-ordinates point x : ");
    scanf("%d",&x);
    printf("Enter the cartesian co-ordinates point y : ");
    scanf("%d",&y);
    r = sqrt(pow (x,2)+(y,2));
    thetha  = atan(y/x);
    printf("Convert the certesian to polar co-ordinates point  = %f\n %f\n ",r,thetha);
    return 0;
}
