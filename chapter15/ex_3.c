/*Write a program that genrates and prints the Fibonacci words of order 0 through 5. if f(0) = "a",f(1)="b",f(13) = "bab"
,f(4)="babba",etc.*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    char lastbutonterm[50]={'A'};
    char lastterm[50]={'B'};
    int i;
    for(i=1;i<=5;i++)
    {
        strcpy(str,lastterm);
        strcat(str,lastbutonterm);
        printf("%s\n",str);
        strcpy(lastbutonterm,lastterm);
        strcpy(lastterm,str);
    }
    
    return 0;
}