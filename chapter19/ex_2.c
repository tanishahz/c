#include <stdio.h>
int main(int argc,char*argv[])
{
    char ch;
    FILE *p;
    if (argv == 2)
    {
        p = fopen(argv[1], "r");
        while (1)
        {
            ch = fgetc(p);
            if (ch == EOF)
                break;
            printf("%c", ch);
        }
    }
    else
    {
        printf("Write a proper command ");
    }
    fclose(p);
    return 0;
}
