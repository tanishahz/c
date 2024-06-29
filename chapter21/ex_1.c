#include <stdio.h>
void showbits(unsigned char);
int main()
{
    unsigned char num = 225, k;
    printf("\nDecimal %d is same as binary ", num);
    showbits(num);
    k = num >> 1;
    printf("\n%d right shift 1 given ", num);
    showbits(k);
    k = num >> 2;
    printf("\n%d left shift 2 given ", num);
    showbits(k);
    k = num >> 1;
    printf("\n%d left shift 1 given ", num);
    showbits(k);
    k = num >> 2;
    printf("\n%d left shift 2 given ", num);
    showbits(k);
    k = num >> 0;

    return 0;
}
void showbits(unsigned char n)
{
    int i;
    unsigned char j, k, andmask;
    for (i = 7; i >= 0; i--)
    {
        j = 1;
        andmask = 1 << j;
        k = n & andmask;
        k == 0 ? printf("0") : printf("1");
    }
}
