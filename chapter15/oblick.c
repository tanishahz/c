#include<stdio.h>
#include<string.h>
void comparestr(char str1[], char str2[]);
int main()
{
    char str1[30]="TANISHA";
    char str2[30]="tanisha";
    comparestr(str1,str2);
    return 0;
}
void comparestr(char str1[], char str2[])
{

  int x=strlen(str1);
  for(int i=0;i<x;i++)
  {
    if(str1[i]==str2[i])
    {
       printf("Both Strings are equal.\n");
    }
    else
    {
      printf("Both Strings are not equal.\n");
    }
       
  }
}