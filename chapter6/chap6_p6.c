//The odd loop
#include<stdio.h>
int main()
{
    char another;
    int num;
    do
    {
        printf("Enter the any number : ");
        scanf("%d",&num);
        printf("square of %d is %d\n",num,num*num);
        printf("Want to enter another number y/n : ");
        getchar();
        scanf("%c",&another);
    }
    while(another=='y');
    return 0;
}