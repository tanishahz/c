#include<stdio.h>
#include<string.h>
int main()
{
    char str[5][50]={"apple","banana","guava","peach"};
    for(int i=0;i<5;i++)
    {
    printf("%s\n",str[i]);
    }
    return 0;
}