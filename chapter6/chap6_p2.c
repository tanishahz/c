//Nesting of loops
#include<stdio.h>
int main()
{
    int r,c,sum;
    for(r=1;r<=3;r++)
    {
        for(c=1;c<=3;c++)
        {
            sum = r + c;
            printf("r = %dc=%dsum=%d\n",r,c,sum);
        }
    }
    return 0;
}