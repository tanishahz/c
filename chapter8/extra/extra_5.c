#include<stdio.h>
void fibonacci(int n)
{
    int prev = 0,corrent=1,next;
    printf("Fibonacci Series up to %d terms: ", n );
    for(int i=1;i<=n;i++){
    printf("%d",prev);
    next = prev + corrent;
    prev = corrent;
    corrent = next;
    }
}
int main()
{
    int term;
    printf("Enter the number of  terms : ");
    scanf("%d",&term);

    fibonacci (term);
    
return 0;
}