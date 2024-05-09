// #include<stdio.h>
// void fun1();
// int main()
// {
//     fun1();
//     return 0;
// }
// void fun1() 
// {  
//     int a,b,s;
//     printf("Enter the  values : ");
//     scanf("%d %d",&a,&b);
//     s = a*b;
//     printf("%d",s);
// }
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the number :");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && b>c && c<a)
    {
        printf("big a");
    }
    else if(b>c)
    {
        printf("big b");
    }
    else
    {
        printf("big c");
    }
    return 0;
}
