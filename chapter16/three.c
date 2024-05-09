#include<stdio.h>
#include<string.h>
int main()
{
    char names[][20]={"akshay","parag","raman","srinivas","gopal","rajesh"};
    int i;
    char t;
    printf("Original: %s %s\n",&names[0][0],&names[1][0]);
    for(i=0;i<=19;i++)
    {
        t= names[0][i];
        names[0][i]=names[1][i];
        names[1][i]=t;
    }
    printf("New:%s %s\n", &names[0][0],&names[1][0]);
    return 0;
}                                           