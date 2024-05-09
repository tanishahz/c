/*the program ask to type your name. When you do so, it checks your name 
against a master list to see if you are worthy of entry to the palace. 
Here's the program...*/
#include<stdio.h>
#include<string.h>
int main()
{
    char masterlist[6][20]={ "akshy","parag","raman","srinivas","gopal","rajesh"};
    int i;
    char yourname[20];
    printf("Enter your name : ");
    scanf("%s",yourname);
    for(i=0;i<=5;i++)
    {
        if(stricmp(&masterlist[i][0],yourname)==0 )
        {
            printf("Welcome, you can enetr the palace\n");
            return 0;
        }
    }
    printf("sorry, you are a trespasser");
    return 0;
}