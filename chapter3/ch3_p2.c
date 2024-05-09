/*In a company an employee is paid as under:
if his basic salary is less than Rs.1500,then HRA = 10% of basic salary and DA = 90% of basic 
is either equal to or above Rs. 1500,then HRA = Rs.500 and DA = 98% of basic salary . 
if the employe's salary is input the keyboard write a program to find his gross salary.*/
#include<stdio.h>
int main()
{
    float bs,gs,da,hra;
    printf("Enter the basic salary : ");
    scanf("%f",&bs);
    if (bs<1500)
    {
        hra = bs*10/100;
        da = bs*90/100;
    }
    else
    {
        hra = 500;
        da = bs*98/100;
    }
        gs = bs + hra + da;
        printf("gross salary = Rs.%f\n",gs);
    return 0;
}   