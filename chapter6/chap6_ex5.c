/*Ramanujan number is the smallest number that can be expressed as sum of two
different ways.Wite a program to print all such numbers up to a reasonable limit*/
// #include<stdio.h>
// int main()
// {
//     int count,num=1,i,j,set1_i,set1_j,set2_i,set2_j;
//     while(num<=10000)
//     {
//         count=0;
//         for(i=1;i<=30;i++)
//         {
//             for(j=i;j<=30;j++)
//             {
//                 if(i*i*i + j*j*j == num)
//             set1_i=i;
//             set1_j=j;
//             set2_i=i;
//             set2_j=j;
//             printf("set1=%d\n",set1_i,set1_j);
//             printf("set2=%d\n",set2_i,set2_j);
//                 count++;
//             }
//         }
//             if(count == 2)
//             printf("%d\n",num);
//         num++;
//         break;
//     }
//     return 0;
// }
#include <stdio.h>
int main()
{
    int count, num = 1, i, j;
    while (num <= 10000)
    {
        count=0;
        for (i = 1; i * i * i <= num; i++)
        {
            for (j = i; i * i * i + j * j * j <= num; j++)
            {
                if (i * i * i + j * j * j == num)
                    count++;
            }
        }
        if (count == 2)
        {
            int a,b;
            for(a=1;a*a*a<=num;a++)
            {
                for(b=a;b*b*b<=num;b++)
                {
                    if(a*a*a+b*b*b==num)
                    printf("%d, %d = %d\n",a,b,num);
                }
            
            }
        }
        num++;
    }
    return 0;
}