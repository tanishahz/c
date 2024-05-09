#include<stdio.h>
int main()
{
    int sum=0,digit,sum2=0,cardno;
    long long int n;
    int arr[16];
    //printf("Enter the credit card number : ");
    //scanf("%lld",&n);
    n= 4567123456789929;
    for(int i=15;i>=0;i--)
    {
        arr[i] = n%10;
        n = n/10;
    }
    for(int i=0;i<16;i++)
    {
       if (i%2==0)
       {
        digit=arr[i]*2;
        if(digit>9)
        digit=digit-9;
        sum = sum+digit;
       }
       else
       {
        sum2=sum2+arr[i];
       }
       
    }
    //printf("%d\n",sum2);
    //printf("%d",sum);
    cardno=sum2+sum;
    if(cardno%10==0)
    {
        printf("The cardno. is valid");
    }
    else
    {
        printf("The cardno. is not valid");
    }
    
    return 0;
}