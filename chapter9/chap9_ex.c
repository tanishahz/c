/*programs*/
// #include<stdio.h>
// void fun (int,int);
// int main()
// {
//     int i = 5,j = 2;
//     fun (i,j);
//     printf("%d %d\n",i,j);
//     return 0;
// }
// void fun(int i, int j)
// {
//     i = i*i;
//     j = j*j;
// }
// #include<stdio.h>
// void fun (int*,int*);
// int main()
// {
//     int i = 5,j = 2;
//     fun (&i,&j);
//     printf("%d %d\n",i,j);
//     return 0;
// }
// void fun(int *i, int *j)
// {
//     *i = *i*i;
//     *j = *j*j;
// }
#include<stdio.h>
void fun (int*,int*);
int main()
{
 float a = 13.5;
 float *b,*c;
 b = &a;
 c = b;
 printf("%u %u %u\n",&a,b,c);
 printf("%f %f %f %f %f\n",a,*(&a),*&a,*b,*c);
 return 0;
}