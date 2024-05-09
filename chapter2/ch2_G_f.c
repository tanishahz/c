/*Two number are input through the keybord into two locations C and D.Write a program to interchange the contents of C and D.*/
#include <stdio.h>

int main()
{
    int c, d, e;
    printf("Enter the value c : ");
    scanf("%d", &c);
    printf("Enter the value d : ");
    scanf("%d", &d);
    // e = c;
    // c = d;
    // d = e;
    c = c+d;
    d = c-d;
    c = c-d;
    printf("interchange the value of c = %d\n ", c);
    printf("interchange the value of d = %d\n ", d);
    return 0;
}