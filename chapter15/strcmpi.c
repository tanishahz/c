#include<stdio.h>
#include<ctype.h>
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
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    for(int i=0;i<len1;i++)
    {
        if(tolower(str1[i])!=tolower(str2[i]))

    {
      printf("Both Strings are not equal.\n");
      return;
    }
     if(len1!=len2)
    {
       printf("Both Strings not are equal.\n");
       return;
    }
    } 
      printf("Both Strings are  equal.\n");
      
    }
