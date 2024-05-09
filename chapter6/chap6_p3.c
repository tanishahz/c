//The break statement
/*Write a program to determine whether a number is prime or not.A prime number is said to 
be prime if it is divisible only by 1 or itself. */
#include<stdio.h>
int main()
{
    int num,i;
    printf("Enter the number : ");
    scanf("%d",&num);
    i = 2;
    while(i<num)
    {
        if(num%i ==0)
        {
            printf("Not a prime number\n");
            break;
        }
        i++;
    }
    if(i == num)
    printf("Prime number\n");
    return 0;
}
// #include<stdio.h>
// int main()
// {
//     int i = 1,j = 1;
//     while(i++<=100)
//     {
//        while(j++<=200)
//        {
//         if(j==150)
//            break;
//         else
//            printf("%d %d\n",i,j);
//        }
//     }
//     return 0;
// }