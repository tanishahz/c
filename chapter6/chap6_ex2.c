/*According to a study,The approximate level of intelligence level of 
intelligence of a person can calculate using the following formula
i = 2+(y+0.5x) 
write a program that will produce a table of values of i,y and x, where y 
varies from 1 to 6,and,for each value of y,x,varies from 5.5 to 12.5 in step
 of 0.5*/
#include<stdio.h>
int main()
{
    int y;
    float i,x;
    for(y=i;y<=6;y++)
    {
        {
            i = 2+(y+0.5*x);
            printf("while Y=%d x=%.1f intellingence = %.3f\n",y,x,i);
        }
    }
    return 0;
}