/* Using conditional oprators determine:
   (1) Whether the charcter entered through the keyboard is a lower case alphabet or not.
   (2) Whenther a character entered through the keyboard is a special symbol or not. 
*/
#include<stdio.h>
int main()
{
   char ch;
   printf("Enter a character : ");
   scanf("%c",&ch);
   if(ch>=97 && ch<=122)
   {
   printf("Character is a lowercase English alphabet ");
   }
   else 
        printf("Character entered is not a lowercase English alphabet");
   return 0;
}