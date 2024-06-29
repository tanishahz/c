#include <stdio.h>
int main()
{
    FILE *p, *q;
    char ch;
    p = fopen("Tanisha.txt", "r");
    if (p == NULL)
    {
        printf("File could't open :- ");
        return 0;
    }
    q = fopen("target.txt", "w");
    while (1)
    {
        ch = fgetc(p);
        if (ch == EOF)
            break;
        fputc(ch, q);
    }
    fclose(p);
    fclose(q);
    return 0;
}