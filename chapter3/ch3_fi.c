// /*According to Gregonian calender,it was monday on the date 01/01/01.if any year is input
// through the keyboard write a program to find out whta is the day on 1st january of this year*/
// #include <stdio.h>
// int main()
// {
//     int year, basic_year = 1900, leap_year, remaining_year, tota_days, day;
//     printf("Enter the year : ");
//     scanf("%d", &year);
//     year = (year - 1) - basic_year;
//     leap_year = year / 4;
//     remaining_year = year - leap_year;
//     tota_days = (remaining_year * 365) + (leap_year * 366) + 1;
//     day = tota_days % 7;
//     if (day == 0)
//         printf("Monday");
//     else if (day == 1)
//         printf("Tuesday");
//     else if (day == 2)
//         printf("Wednesday");
//     else if (day == 3)
//         printf("Thursday");
//     else if (day == 4)
//         printf("Friday");
//     else if (day == 5)
//         printf("saturday");
//     else if (day == 5)
//         printf("sunday");
//     else
//         printf("Wrong Entry");
//     return 0;
// }
#include<stdio.h>
int main()
{
    int year,leap_year,days,total_days;
        printf("Enter the year : ");
        scanf("%d",&year);
        leap_year = ((year-1) / 4) + ((year-1) / 400) - ((year-1) / 100);
        days = (year - 1 )*365 + leap_year;
        if(days % 7 == 0)
        {
            printf("Monday");
        } 
        if(days % 7 == 1)
        {
            printf("Tuesday");
        } 
        if(days % 7 == 2)
        {
            printf("Wednesday");
        } 
        if(days % 7 == 3)
        {
            printf("Thursday");
        } 
        if(days % 7 == 4)
        {
            printf("Friday");
        } 
        if(days % 7 == 5)
        {
            printf("Saturday");
        } 
        if(days % 7 == 6)
        {
            printf("Sunday");
        } 
    return 0;
}