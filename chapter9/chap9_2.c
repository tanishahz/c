/*Given three variables x,y,z write a function to circularly shift their values to 
right. In other words if x = 5 , y = 8 , z = 10 , after circular shift y = 5, z=8,
x = 10. call the function with variables a,b,c to circularly shift values.*/
#include<stdio.h>
void swap(int *x,int *y,int *z);
int main()
{
    int x=5,y=8,z=10,t;
    swap(&x,&y,&z);
    printf("%d %d %d",x,z,y);    
    return 0;
}
void swap(int *x,int *y,int *z)
{
    int t;
    t=*x;
    *x=*z;
    *z=*y;
    *y=t;
}