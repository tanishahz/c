// point out the errors, if any , in the following programs:-
// #include<stdio.h>
// int main()
// {
//     int a[]="Hello";
//     while(a!='\0')
//     {
//         printf("%c",*a);
//         a++;
//     }
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     double dval;
//     scanf("%f",&dval);
//     printf("Double Value = %lf\n",dval);
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int ival;
//     scanf("%d\n",&n);
//     printf("Integer Value = %d\n",ival);
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int dd,mm,yy;
//     printf("Enter date in dd/mm/yy or dd-mm-yy format\n");
//     scanf("%d%*c%d%*c%d",&dd,&mm,&yy);
//     printf("The date ism: %d-%d-%d\n",dd,mm,yy);
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     char text;
//     sprintf(text,"%4d\t%2.2f\n%s",12,3.452,"Merry Go Round ");
//     printf("%s\n",text);
//     return 0;
// }
#include<stdio.h>
int main()
{
    char buffer[50];
    int no = 97;
    double val = 2.34174;
    char name[10]="shweta";
    sprintf(buffer,"%d %lf %s",no,val,name);
    printf("%s\n",buffer);
    sscanf(buffer"%4d%2.2lf%s",&no,&val,name);
    printf("%s\n",buffer);
    printf("%d %lf%s\n",no,val,name);
    return 0;
}