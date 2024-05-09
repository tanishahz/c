// /*Write a program that extracts part of the given string from the specified position.
//  for example,if the string is workings is fun", then if from position 3,4 characters are
//  to be extracted the program should return as "king".*/
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str1[30]="Working is fun";
//     char str2[10];
//     int k=0;
//     for(int i=3;i<7;i++)
//     {
//         str2[k]=str1[i];
//         k++;
      
//     }
//     str2[k]='\0';
//      printf("%s",str2);
//     return 0;
// }
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
       char str[20],news[20];
       char *s,*t;
       int pos,n,i;
       printf("Enter a string :");
       scanf("%s",str);
       printf("Enter the position and no.of characters to extract : ");
       scanf("%d %d",&pos,&n);
       s=str;
       t=news;
       if(pos<0||pos>strlen(str))
       {
        printf("Improper position value ");
        exit(1);
       }
       if(n<0)
       n=0;
    if(n>strlen(str))
          n = n-strlen(str)-1;
        s=s+pos;
        for(i=0;i<n;i++)
        {
            *t=*s;
            s++;
            t++;
        }
        *t='\0';
        printf("The substring is : %s\n",news);
    return 0;
}