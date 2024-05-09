/*if the marks obtained by a student in five  different subjects are input through the keyboard ,
Write a program to find the aggregate marks and percentage marks obtained by the student . Assume 
54that maximum marks that can be obtained by a student in eacgh subjects is 100 
*/

#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,aggr;
    float per;
    printf("Enter the marks's in 5 subjects ;");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
    aggr = m1+m2+m3+m4+m5;
    per = aggr/5;
    printf("aggregate marks = %d\n",aggr);
    printf("percentage marks = %f\n",per);
    return 0;
}