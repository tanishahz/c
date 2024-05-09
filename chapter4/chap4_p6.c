/*if the three sides of a tringle are entered through the keyboard,Write a program to check whether
the tringle is valid or not. The triangle is valid if the sum of two sides is greater than the 
largest of the three sides.
*/
// #include<stdio.h>
// int main()
// {
//     int side1,side2,side3,largeside,sum;
//     printf("Enter three sides of the tringle : ");
//     scanf("%d %d %d",&side1,&side2,&side3);
//     if(side1>side2)
//     {
//         if(side1>side3)
//         {
//             sum = side2+side3;largeside = side1;
//         }
//     }
//     else
//     {
//         if (side2>side3)
//         {
//             sum = side1+side3;largeside = side2;
//         }
//         else
//         {
//             sum = side1+side2;largeside = side3;
//         }
//     }
//         if(sum>largeside)
//           printf("The triangle is a valid triangle");
//         else
//           printf("The triangle is an invalid triangle");
//     return 0;
// }
#include<stdio.h>
void fun1();
int main()
{
    fun1();
    return 0;
}
void fun1()
{
    int side1,side2,side3,largeside,sum;
    printf("Enter three sides of the tringle : ");
    scanf("%d %d %d",&side1,&side2,&side3);
    if(side1>side2)
    {
        if(side1>side3)
        {
            sum = side2+side3;largeside = side1;
        }
    }
    else
    {
        if (side2>side3)
        {
            sum = side1+side3;largeside = side2;
        }
        else
        {
            sum = side1+side2;largeside = side3;
        }
    }
        if(sum>largeside)
          printf("The triangle is a valid triangle");
        else
          printf("The triangle is an invalid triangle");
}
