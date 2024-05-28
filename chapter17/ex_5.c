/*there is a structure called employee that holds information like employee code, name and date of joining. 
Write a program to create an array of structure and enter some data into it. then ask the user to enter current date. 
Display the names of those employees whose tenure is greater than equal to 3 years.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_EMPLOYEES 2
struct date {
    int day;
    int month;
    int year;
};
struct employee {
    int code;
    char name[50];
    struct date d;
};
 void input(struct employee *s, int n);
 void print(struct employee *s , int n,int current_year,int current_month,int current_day);
 void diff(struct employee *s, int n);
int main()
{   int current_date;
    int current_year;
    int current_month;
    struct employee *s;
    s = (struct employee *)malloc(MAX_EMPLOYEES * sizeof(struct employee));
    int n;
    while (1)
    {
        printf("1. Enter the data. :\n");
        printf("2. Print the data. :\n");
        printf("3. Sort data by name. :\n");
        printf("4. sort data by Date of joining :\n");
        printf("5. Print data who work with us grater or equal to 3 years :\n");
        printf("5.Exit :\n");
        printf("==> ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            input(s,MAX_EMPLOYEES);
            break;
        case 2:
            print(s,MAX_EMPLOYEES);
            break;
        case 3:
            diff(s,MAX_EMPLOYEES);
            break;
        case 4:
            break;
        case 5:
        exit(1);
            break;
        default:
            printf("Please choose correct option.\n");
            break;
        }
    }
    free(s);
    return 0;
}
 void input(struct employee *s , int n )
{
   
    for (int i = 0; i < n; i++) {
        printf("Enter the employees data : \n");
        printf("Enter the code :");
        scanf("%d",&(s+i)->code);
        getchar();
        printf("Enter the Employee Name : ");
        gets((s+i)->name);
        printf("Enter the date (date/month/year) : ");
        scanf("%d/%d/%d",&(s+i)->d.day,&(s+i)->d.month,&(s+i)->d.year);
    }
    }
 void print(struct employee  *s,int n){ 
      for (int i = 0; i < n; i++)
    {
        printf("---------------------------------\n");
        printf("code            = %d\n",(s+i)->code);
        printf("Name            = %s\n", (s+i)->name);
        printf("Date            = %d/%d/%d\n", (s+i)->d.day,(s+i)->d.month,(s+i)->d.year);
            }
 }

  void diff(struct employee *s , int n)
  {
  print("Employees with tenure greater than or eual to 3 year ==>\n");
  for(int i=0;i<n;i++)
 {
     int tenure_year = current_year - (s+i)->year;
    if (current.month < (s+i)->month || (current_month ==(s+i)->month && current_day <(s+i)->day)) {
    {
        tenure--;
    }
    if(tenure_years >= 3)
    {
        printf("Employee %d: %s\n,(s+i)->emp_code, (s+i)->name");
    }
    }
}
  }























































































































