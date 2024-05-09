#include<stdio.h>
#include<string.h>
int main()
{
    char str[]= "banana";
    int x,i;
    x=strlen(str);
    for(i=0;i<x;i++)
    {
        if(str[i]>96 && str[i]<123)
        {
            str[i]=str[i]-32;
        }
    }

    puts(str);
    return 0;
}