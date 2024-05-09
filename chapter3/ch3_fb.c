/*if ages of Ram,Shyam and ajay are input through the keyboard,
Write a program to determine the youngest of the three.*/
#include <stdio.h>
int main()
{
    int ram, shyam, ajay;
    printf("Enter the age : ");
    scanf("%d %d %d", &ram, &shyam, &ajay);
    if (ram < shyam)
    {
        if (ram < ajay)

            printf("Ram is youngest");
        else
            printf("Ajay is youngest");
    }
    else
    {
        if (shyam < ajay)

            printf("shyam  is youngest");
        else
            printf("Ajay is youngest");
    }
    return 0;
}