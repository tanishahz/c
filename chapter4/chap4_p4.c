/*A year is entred through the keyboard, Write a program to detremine whether the year 
is leap or not.Use the logical operators && and ||.*/
// #include<stdio.h>
// void fun1();
// int main()
// {
//          fun1();
//          return 0;
//          }
//  void fun1()
// {
//     int year;
//         printf("Enter the year : ");
//         scanf("%d",&year);
//     if ((year % 400 == 0) || (year % 100 != 0) && (year%4==0))
//         printf("Leap year\n");
//     else
//         printf("Not a leap year\n");
// }
#include<stdio.h>
int main()
{
    int year;
        printf("Enter the year : ");
        scanf("%d",&year);
    if ((year % 400 == 0) || (year % 100 != 0) && (year%4==0))
        printf("Leap year\n");
    else
        printf("Not a leap year\n");
        return 0;
}