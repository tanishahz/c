#include<stdio.h>
#include<string.h>
int comparestr(char str1[],char str2[]);
int main()
{
    char str1[30]="shri radhey";
    char str2[30]="shri radhey";
    
    if(comparestr(str1,str2)==0)
    {
        printf("Both strings are matches");
    }
    else{
        printf("Both strings are not matches ");
    }
    return 0;
}
int comparestr(char str1[],char str2[])
{
    int x = strlen(str1);
    for(int i=0;i<x;i++)
    {
        // if(str1[i]-str2[i]==0)
        // {
        //     // printf("Both strings are equal \n");
        // }
        // else
        // {
        //     return (str1[i]-str2[i]);
        // }
        if(str1[i]-str2[i]!=0)
        {
           return (str1[i]-str2[i]);
        }
    }
     return 0;
}