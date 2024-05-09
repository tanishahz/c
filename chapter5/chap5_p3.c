/*Write a program to calculate overtime pay of 10 employees.Overtime is paid at the rate of
Rs.12.00 per hour for every hour worked above 40 hours .Assume that employees do not work for
 fractional part of an hour.*/
 #include<stdio.h>
 int main()
 {
    float topay;
    int hour,i=1;
    while(i<=10)
    {
        printf("Enter the no. of hours worked : ");
        scanf("%d",&hour);
        if(hour>=40)
        topay = (hour-40)*12;
        else if(hour<=30)
        topay=0;
        printf("Hours = %d overtime pay = Rs.%f\n",hour,topay);
        i++;
    }
    return 0;
 }