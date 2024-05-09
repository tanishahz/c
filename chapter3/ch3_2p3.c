/* Any year is input through the eyboard.Write a pogram to determine whether the year is a 
a leap year or not*/
#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year : ");
    scanf("%d",&year);
    if (year%100 == 0)
    {
        if(year%400 == 0)
        printf("leap year ");
        else
        printf("non leap year");
    }
    else
    {
        if (year%4 ==0)
          printf("leap year");
        else
        printf("non leap year");
    }
    
    return 0;
}