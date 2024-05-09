/*Write a program to stores a few strings using an array of pointers to 
strings. Receive a string and check if it is present in the array.*/
// search a string in an array
#include<stdio.h>
#include<string.h>
int main()
{
      char *str[]={"We will teach you how to...","Move a mountain",
      "Level a building","Erase the past","Make a million",".....all through C!"};
      char str1[100],*p;
      int i;
      printf("\n Enter string to be searched :");
      // scanf("%s",str1);
      gets(str1);
      p=NULL;
      for(i=0;i<6;i++)
      {
        p=strstr(str[i],str1);
        if (p!=NULL)
        {
            printf("%s found in the array",str1);
            return 0;
        }
      }
      printf("%s not found in the array",str1);
    return 0;
}