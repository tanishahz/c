/*Write a program to enter numbers till the user ants.At the end it should display the count 
of positive,negative,zeros entered.*/
#include<stdio.h>
int main()
{
    int pos,neg,zero,x;
    pos = neg =zero =0;
    char ch ='y';
    while (ch=='y')
    {
        printf("Enter any number:");
        scanf("%d",&x);
        if(x<0)
         neg++;
        if(x>0)
         pos++;
        if(x==0)
         zero++;
         getchar();
         printf("Do you want to enter number :");
         scanf("%c",&ch);
}
    printf("Total positive number %d\n,Total negative number %d\n total,Total zero number%d\n",pos,neg,zero);
    
    return 0;
}