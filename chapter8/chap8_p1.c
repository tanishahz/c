/*A Fuction is a self-contained block of statements that performs a coherent task of some kind.
Let us look at a simple program that introduces us to the idea of a C fuction.*/
#include<stdio.h>
void message();
int main()
{
    message();
    printf("Cry, and you stop the monotony!\n");
    return 0;
}
void message()
{
    printf("Smile, and the World smiles wity you...\n");
}