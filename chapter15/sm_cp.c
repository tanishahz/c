#include<stdio.h>
#include<string.h>
void convstr(char str[]);
int main()
{
    char str[8]="tanisha";
    convstr(str);
    puts(str);
}
void convstr(char str[])
{
    int x,i;
    x=strlen(str);
    for(i=0;i<x;i++)
    {
      if (str[i]>96 && str[i]<123) 
      {
        str[i]=str[i]-32;
      } 
      
    }
}