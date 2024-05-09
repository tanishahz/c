/* Rewrite the following program using conditional operators.
*/
#include<stdio.h>
int main()
{
    float sal;
    printf("Enter the salary : ");
    scanf("%f",&sal);
    if(sal>=25000 && sal<=40000)
    printf("Manager");
    else if(sal>=15000 && sal<25000)
    printf("Accountant");
    else 
     printf("clerk");
    return 0;
}