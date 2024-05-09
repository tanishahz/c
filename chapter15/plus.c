#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20]="hello";
    char str2[20]="hello";
    if(strncmp(str1,str2,3)==0)
    {
        printf("requard strings are match : ");
    }
    else
    {
        printf("requard strings are not match :");
    }
    

}
