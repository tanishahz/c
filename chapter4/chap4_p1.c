/*The marks obtained by a student in 5 subject in 5 different subject are input through the kayboard
.The student gets a divisen as per the following rules:
perchantage above or equal to 60- First division
perchantage between 50 and 59 - second division
perchantage between 40 and 49- third division
perchantage less than 40- fail
Write a program to calculate the division obtained by the student.*/
// #include<stdio.h>
// int main()
// {
//     int m1,m2,m3,m4,m5,per;
//     printf("Enter marks in five subject : ");
//     scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
//     per = ( m1+m2+m3+m4+m5)*100/500;
//     if (per>=60)
//         printf("First division\n");
//     else if(per>=50)
//         printf("Second division\n");
//     else if(per>=40)
//         printf("Third division\n");
//     else if(per<=40)
//         printf("Fail\n");
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int m1,m2,m3,m4,m5,per;
//     printf("Enter marks in five subjects : ");
//     scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
//     per= (m1+m2+m3+m4+m4)*100/500;
//     if(per>=60)
//         printf("First Division");
//     if((per>=50)&&(per<=60))
//         printf("Second Division");
//     if ((per>=40)&&(per<=50))
//         printf("Third Division");
//     if (per<40)
//         printf("Fail");
//     return 0;
// } 
#include<stdio.h>
void fun1();
int main()
{
    fun1();
    return 0;
}
void fun1()
{
    int m1,m2,m3,m4,m5,per;
    printf("Enter marks in five subjects : ");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
    per= (m1+m2+m3+m4+m4)*100/500;
    if(per>=60)
        printf("First Division");
    if((per>=50)&&(per<=60))
        printf("Second Division");
    if ((per>=40)&&(per<=50))
        printf("Third Division");
    if (per<40)
        printf("Fail");
} 