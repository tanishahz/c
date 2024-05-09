#include<stdio.h>
#include<string.h>
int main()
{
    char str1[30]="tanishay787@gamil.com";
    char str2[30];
    char str3[30]="89765tani";
    char str4[30];
    printf("Enter the email id : ");
    gets(str2);
    printf("Enter the userpassword : ");
    gets(str4);
    if(strcmp(str1,str2) + strcmp(str3,str4) ==0)
    {
        printf("Login succesful");
        
    }
    else
    {
        printf("incorrect email or password.");
    }
    return 0;
}