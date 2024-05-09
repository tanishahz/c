/*if a five-Digit number is input through the keyboard,Write a program to calculate the sum of its digit.(Hint:use the modulas operator'%')*/
#include<stdio.h>
int main()
{
    int num,n1,n2,n3,n4,n5,sum;
    printf("Enter the number : ");
    scanf("%d",&num);
    n1 = num%10;
    n2 = num%100;
    n2 = n2/10;
    n3 = num%1000;
    n3 = n3/100;
    n4 = num/1000;
    n4 = n4%10;
    n5 = num/10000;
    sum = n1+n2+n3+n4+n5;
    printf("%d",sum);
    return 0;
}