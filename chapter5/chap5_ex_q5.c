/*Write a program to recieve an integer and find its octal equivalent.(Hint:To obtain octal
equivalent of an integer , divide it cntinuously by 8till dividend doesn't become zero,then
 write the remainders obtained in reverse direction.)*/
// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int num,r,i=0,oct=0;
//     printf("Enter the integer number : ");
//     scanf("%d",&num);
//     while(num!=0)
//     {
//         r = num%8;
//         oct = oct + r*pow(10,i);
//         i++;
//         num = num/8;
//     }
//     printf("Octal number is = %d\n",oct);
//     return 0;
// }

#include<stdio.h>
#include<math.h>
int main()
{
    int num,r,i=0,bia=0;
    printf("Enter the integer number : ");
    scanf("%d",&num);
    while(num!=0)
    {
        r = num%2;
        bia = bia + r*pow(10,i);
        i++;
        num = num/2;
    }
    printf("Binary number is = %d\n",bia);
    return 0;
}

