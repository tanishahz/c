/*Ramesh's basic salary is input through the keyboard. his dearness allowance is 40% of basic salary ,
 and house rent allowance is 20% of basic salary .Write a program to calculate his gross salary.*/
 /* calculate ramesh gross salary*/
 #include<stdio.h>
 int main()
 {
 int salary,hra,da,s;
 printf(" Basic Salary of Ramesh :");
 scanf( "%d",&salary);
 da = salary*40/100;
 hra = salary*20/100;
 s = salary + da + hra;
 printf("Total Salary payable  %d",s);
 return 0;
}