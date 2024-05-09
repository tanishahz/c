#include <stdio.h>
#include <string.h>
int xlen(char str[]);
int main()
{
    int x;
    char str[]="Applee";
    x = xlen(str);
    printf("%d",x);
    return 0;
}
int xlen(char str[])
{
    int i,count=0;
    char *p;
    p=str;
    while (*p!='\0')
    {
        count++;
        p++;
    }
    return count;
}