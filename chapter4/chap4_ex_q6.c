/* Write a program using conditional operators operators to determine whether a year entered through
the keyboard is a leap year or not.
*/
#include<stdio.h>
int main()
{
    int year;
    printf("Enter any year : ");
    scanf("%d",&year);
    if(year%100==0 && year%400==0 && year%4!=0)
    {
        printf("leap year");
    }
    else 
    {
        printf("Not a leap year");
    }
    return 0;
}