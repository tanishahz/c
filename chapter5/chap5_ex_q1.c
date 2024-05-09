/*Write a program to print all the ASCII values and their equivalent character using a while loop.
The ASCII values vary from 0 to 255.*/
#include<stdio.h>
int main()
{
    char ascii;
    int i=0;
      while(i<=255)
      {
        printf("%c = %d\n",i,i);
        i++;
      }
    return 0;
}