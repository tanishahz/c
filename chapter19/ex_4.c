// #include<stdio.h>
// int main()
// {
//     FILE *p;
//     char str[100];
//     p=fopen("file.txt","r");
//     if(p==NULL)
//     {
//         printf("file can't open");
//         return 0;
//     }
//     while(fgets(str,99,p)!=NULL)
//     {
//         printf("%s",str);
//     }
//     fclose(p);
//     return 0;
// }

#include<stdio.h>
int main()
{
    FILE *p;
    char str[100];
    p=fopen("New.txt","w");
    if(p==NULL)
    {
         printf("file can't open");
         return 0;
    }
    printf("Enter text here :");
    while(strlen(gets(str))>0)
    {
        fputs(str,p);
        fputs("\n",p);
    }
    fclose(p);
    return 0;
}