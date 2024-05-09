#include<stdio.h>
#include<string.h>
int main()
{
    int n,mul=10,sum=0,i;
    char isbn[11];
    printf("Enter the isbn number : ");
    scanf("%s",&isbn);
    for(i=0;i<10;i++)
    {
        if(isbn[i] == 'x' || isbn[i] == 'X')
        {
            n = 10;
            sum = sum + n * mul;
        } 
        else
        {
            n = isbn[i] - 48;  
        sum = sum + n * mul;
        }
        mul--;
    }
    if(sum%11==0)
    {
        printf("Valid isbn no.\n");
    }
    else
    {
        printf("invalid isbn no.\n");
    }

}