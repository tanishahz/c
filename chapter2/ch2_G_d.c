/* Wind chil factor is felt air temperature on exposed skin due to wind. the wind chill tempreture is always lower than the air tempreture ,
 and is calculate as per the following       formula:   wcf = 35.74+0.6215t+(0.4275t-35.75)*v^0.16
where t is th temperature and v is the wind velocity. Write a program to receive values of t and v and calculate wind chill factor (wcf)*/
#include<stdio.h>
#include<math.h>
int main()
{
    float t,v,WCF;
    printf("Enter the temperature t :");
    scanf("%f",&t);
    printf("Enter the velocity v :");
    scanf("%f",&v);
    WCF = 35.74+0.6215*t+(0.4275*t-35.75)*pow(v,0.16);
    printf("wind chill factor %f" ,WCF);
    return 0;
}