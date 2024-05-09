/*Write a program to find the range of set of numbers entered through the keyboard.Range is the
difference between the smallest and biggest number in the list.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int small, big, range, num, limit;
    printf("Enter the limit : ");
    scanf("%d", &limit);
    printf("Enter %d numbers limit : ");
    scanf("%d", &num);
    small = big = num;
    limit = limit - 1;
    while (limit)
    {
        scanf("%d", &num);
        if (num > big)
        {
            big = num;
        }
        if (num < small)
        {
            small = num;
        }
        limit--;
    }
    range = big - small;
    printf("small number = %d\nBig number = %d\n", small, big);
    printf("Range is %d\n", range);
    return 0;
}