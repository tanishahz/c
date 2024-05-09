/*Write a program for a matchstick game being played between the computer and user.Your program
should ensure that the computer always wins.Rules for the game are as follows:
- There are 21 matchsticks.
- The computer ask the player to pick 1,2,3,or 4 matchsticks.
- After the person picks,th computer does its picking.
- whoever is forced to pick up the last matchstick loses the game.*/
#include <stdio.h>
int main()
{
    int m = 21, cp, up;
    while (m != 1)
    {
        printf("User pick matchsticks between 1 to 4 : ");
        scanf("%d", &up);
        if (up >= 1 && up <= 4)
        {
            m = m - up;
            printf("Left matchsticks %d\n", m);
            cp = 5 - up;
            printf("Now computer pick matchsticks %d\n", cp);
            m = m - cp;
            printf("Left matchsticks %d\n", m);
        }
        else
        {
            printf("Enter the correct value\n");
        }
    }
    printf("You loose the game");
    return 0;
}