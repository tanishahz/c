/*consider a currency system in which there are notes of seven denominations,namely,Rs.1,Rs.2,Rs.5,Rs.10,Rs.50,Rs.100.
if a sum of Rs.N is entered through the keyboard , WRITE A PROGRAM TO COMPUTER the smallest number of notes that will combine to give Rs.N.*/
#include<stdio.h>
int main()
{
    int amount,nohun,nofifty,noten,nofive,notwo,noone,total;
    printf("Enter the amount");
    scanf("%d",&amount);
    nohun = amount/100 ;
    amount = amount%100;
    nofifty = amount/50;
    amount = amount%50;
    noten = amount/10;
    amount = amount%10;
    nofive = amount/5;
    amount = amount%5;
    notwo = amount/2;
    amount = amount%2;
    noone = amount/1;
    amount = amount%1;
    total = nohun+nofifty+noten+nofive+notwo+noone;
    printf("Smallest number of notes = %d\n ",total);
    return 0;
}