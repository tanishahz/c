/*how many bytes in memory would be occupied by the following array
of pointers to strings? how many bytes would be required to store the 
same strings, if they are stored in a two-dimensional character array?*/
#include<stdio.h>
//#include<string.h>
int main()
{
    char *mess[]={"Hammer and tongs","Tooth and nail","Spit and polish","You and C"};
    // printf("%d",sizeof(mess));
    char str1[] = "Hammer and tongs";
    printf("%d",sizeof(str1));
    return 0;
}