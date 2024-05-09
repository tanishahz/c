/*A Company insures its drivers in the following cases:
if the driver is married.
if the driver is unmarried, male & above 30 years of age.
if the driver is unmarried, female & above 25 years of age.
in all other cases, the driver is not insured.if the marital status,
sex and age of the driver are the inputs,write a program to determine
whether the driver should be insured or not.*/
// #include<stdio.h>
// void fun1();
// int main()
// {
//   fun1();
//   return 0;  
// }
// void fun1()
// {
//     char sex,ms;
//     int age;
//     printf("Enter the age  : ");
//     scanf("%d",&age);
//     getchar();
//     printf("Enter the sex : ");
//     scanf("%c",&sex);
//     getchar();
//     printf("Enter the ms : ");
//     scanf("%c",&ms);
//     if((ms=='M')|| (ms=='U'&& sex == 'M'&& age>30)||(ms== 'U' && sex == 'F'&& age>25))
//     printf("Driver should be insured\n");
// else 
//     printf("Driver should not be insured\n");
// }
#include<stdio.h>
int main()
{
    char sex,ms;
    int age;
    printf("Enter the age  : ");
    scanf("%d",&age);
    getchar();
    printf("Enter the sex : ");
    scanf("%c",&sex);
    getchar();
    printf("Enter the ms : ");
    scanf("%c",&ms);
    if((ms=='M')|| (ms=='U'&& sex == 'M'&& age>30)||(ms== 'U' && sex == 'F'&& age>25))
    printf("Driver should be insured\n");
else 
    printf("Driver should not be insured\n");
    return 0;
}