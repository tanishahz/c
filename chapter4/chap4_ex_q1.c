/* if the three sides of a triangle are entered through the keyboard, Write a program to check whether the
triangle is isosceles, equilateral,scalene or right angled triangle.
*/
// #include <stdio.h>
// #include <conio.h>
// #include <math.h>
// int main()
// {
//     int x, y, z;
//     int max, flag = 0;
//     printf("Enter the first side : ");
//     scanf("%d", &x);
//     printf("Enter the second side : ");
//     scanf("%d", &y);
//     printf("Enter the third side : ");
//     scanf("%d", &z);
//     if (x == y || y == z || z == x)
//     {
//         printf("Triangle is quilaterl.");
//     }
//     else if (x == y || y == z || z == x)
//     {
//         printf("The triangle is isosceles.");
//     }
//     max = x;
//     if (y > max)
//         max = y;
//     if (z > max)
//         max = z;
//     if (max == x)
//     {
//         if (pow(max, 2) == pow(y, 2) + pow(z, 2))
//             flag = 1;
//     }
//     if (max == y)
//     {
//         if (pow(max, 2) == pow(x, 2) + pow(z, 2))
//             flag = 1;
//     }
//     if (max == z)
//     {
//         if (pow(max, 2) == pow(x, 2) + pow(y, 2))
//             flag = 1;
//     }
//     if (flag == 1)
//     {
//         printf("Triangle is right angled");
//     }
// }
#include <stdio.h>
#include <conio.h>
#include <math.h>
void fun1();
int main()
{
    fun1();
    return 0;
}
void fun1()
{
    int x, y, z;
    int max, flag = 0;
    printf("Enter the first side : ");
    scanf("%d", &x);
    printf("Enter the second side : ");
    scanf("%d", &y);
    printf("Enter the third side : ");
    scanf("%d", &z);
    if (x == y || y == z || z == x)
    {
        printf("Triangle is quilaterl.");
    }
    else if (x == y || y == z || z == x)
    {
        printf("The triangle is isosceles.");
    }
    max = x;
    if (y > max)
        max = y;
    if (z > max)
        max = z;
    if (max == x)
    {
        if (pow(max, 2) == pow(y, 2) + pow(z, 2))
            flag = 1;
    }
    if (max == y)
    {
        if (pow(max, 2) == pow(x, 2) + pow(z, 2))
            flag = 1;
    }
    if (max == z)
    {
        if (pow(max, 2) == pow(x, 2) + pow(y, 2))
            flag = 1;
    }
    if (flag == 1)
    {
        printf("Triangle is right angled");
    }
}