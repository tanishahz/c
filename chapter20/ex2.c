#include <stdio.h>
int main(int argc, char *argv[])
{
    char str[300];
    if (argc == 3)
    {
        FILE *p, *q;
        p = fopen(argv[1], "r");
        q = fopen(argv[2], "w");
        while (fgets(str, 300, p)!=NULL)
        {
            fputs(str, q);
        }
        fclose(p);
        fclose(q);
    }
    else
    {
        printf("please Enter a Valid command");
    }
    return 0;
}