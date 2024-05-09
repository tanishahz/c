/*if the character is entered through the keyboard,write a program to determine whether the 
character is a capital letter ,a small case letter,a digit or special symbol.
The following table shows the range of ASCII values  for various characters:
           CHARACTERS                      ASCII VALUES
              A-Z                             65-90
              a-z                             97-122
              0-9                             48-57
           SPECIAL SYMBOLS                    0-47,58-64,91-96,123-127
*/
// #include<stdio.h>
// void fun1();
// int main()
// {
//    fun1();
//    return 0;
// }
// void fun1()
// {
//    char ch;
//    printf("Enter a character : ");
//    scanf("%c",&ch);
//    if(ch>=65&&ch<=90)
//       printf("The case is uppercase letter");
//    if(ch>=97&&ch<=122)
//       printf("The character is lowercase letter");
//    if(ch>=48&&ch<=57)
//       printf("The character is a digit");
//    if ((ch>90 && ch<97)||(ch>57&&ch<65)||(ch>90&&ch<97)||ch>122)
//       printf("The character is a special symbol ");
// }
#include<stdio.h>
int main()
{
   char ch;
   printf("Enter a character : ");
   scanf("%c",&ch);
   if(ch>=65&&ch<=90)
      printf("The case is uppercase letter");
   if(ch>=97&&ch<=122)
      printf("The character is lowercase letter");
   if(ch>=48&&ch<=57)
      printf("The character is a digit");
   if ((ch>90 && ch<97)||(ch>57&&ch<65)||(ch>90&&ch<97)||ch>122)
      printf("The character is a special symbol ");
   return 0;
}