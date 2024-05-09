/*Write a program to recive value of latitude (L1,L2) and longitude (G1,G2), in dgrees, of two places on the earth 
and output the tance(D) between them in nautical miles.
The formula for distance in nautical miles is :
D = 3963 cos(a)(sin l1 sinl2+cos l1 cosl2*cos(G2-G1))*/
#include<stdio.h>
#include<math.h>
int main()
{
    float l1,g1,l2,g2,d;
    printf("Enter the Ist value of latitude l1 : ");
    Scanf("%f",&l1);
    printf("Enter the 2nd value of latitude l2 : ");
    scanf("%f",&l2);
    printf("Enter the value of longitude g1 : ");
    scanf("%f",&g1);
    printf("Enter the value of longitude g2 : ");
    scanf("%f",&g2);
    d = 3963*acos((sinl1*sinl2)+(cosl1*cosl2)*cos(g1-g2));
    printf("two places distance in nautical miles = %f ",d);
    return 0;
}

