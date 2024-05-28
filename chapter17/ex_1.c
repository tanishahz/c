/*create a structure called student that can contain data given below:
Roll number, Name , Department, Course, Year of joining 
assume that there are not more than 450 students in the college.
(1) Write a function to print the data of a student who joined in a particular year.
(2) Write a function to print the data of a student whose roll number recieved by the function.*/
//(1)---------------------------------
// #include <stdio.h>
// #include <string.h>
// #define MAX_STUDENTS 5
// struct student {
//     int roll_number;
//     char name[50];
//     char department[50];
//     char course[50];
//     int year_of_joining;

// };
// void printStudentsByYear(struct student students[], int num_students, int year);
// void printStudentByRollNumber(struct student students[], int num_students, int roll_number);
// int main() {
//     struct student students[MAX_STUDENTS];
//     int num_students = 0;

//     students[num_students++] = (struct student){1, "Archit", "Computer Science", "B.Tech", 2020};
//     students[num_students++] = (struct student){2, "Tanisha", "Mechanical Engineering", "B.Tech", 2019};
//     students[num_students++] = (struct student){3, "Shivani", "Electrical Engineering", "M.Tech", 2020};
//     students[num_students++] = (struct student){4, "Karishma", "Computer Science", "B.Tech", 2021};
//     students[num_students++] = (struct student){5, "Apurva", "Civil Engineering", "B.Tech", 2019};
    
//     int year = 2020;
//     int roll_number = 2;
//     printf("Students who joined in the year %d:\n", year);
//     printStudentsByYear(students, num_students, year);

//     printf("\nData of the student with roll number %d:\n", roll_number);
//     printStudentByRollNumber(students, num_students, roll_number);

//     return 0;
// }
// void printStudentsByYear(struct student students[], int num_students, int year) {
//     for (int i = 0; i < num_students; i++) {
//         if (students[i].year_of_joining == year) {
//             printf("Roll Number: %d\n", students[i].roll_number);
//             printf("Name: %s\n", students[i].name);
//             printf("Department: %s\n", students[i].department);
//             printf("Course: %s\n", students[i].course);
//             printf("Year of Joining: %d\n\n", students[i].year_of_joining);
//         }
//     }
// }
// void printStudentByRollNumber(struct student students[], int num_students, int roll_number) {
//     for (int i = 0; i < num_students; i++) {
//         if (students[i].roll_number == roll_number) {
//             printf("Roll Number: %d\n", students[i].roll_number);
//             printf("Name: %s\n", students[i].name);
//             printf("Department: %s\n", students[i].department);
//             printf("Course: %s\n", students[i].course);
//             printf("Year of Joining: %d\n", students[i].year_of_joining);
//             return; 
//         }
//     }
//     printf("Student with roll number %d not found.\n", roll_number);
// }


//(2)-------------------------------------

// #include <stdio.h>
// #include <stdlib.h>
// #define MAX 3
// struct student
// {
//     int roll;
//     char name[20];
//     char department[20];
//     char course[6];
//     int year;
// };
// void input_students(struct student *s, int n);
// void print_students(struct student *s, int n);
// void print_students_by_year(struct student *s, int n);
// void print_students_by_roll(struct student *s, int n);
// int main()
// {
//     struct student *students = malloc(MAX * sizeof(struct student));
//     if (students == NULL)
//     {
//         printf("Memory allocation failed.\n");
//         return 1;
//     }
//     int n;
//     while (1)
//     {
//         printf("Select any option:\n");
//         printf("1. Enter Student data.\n");
//         printf("2. Print all student data.\n");
//         printf("3. print data according year of join.\n");
//         printf("4. print data according roll no.\n");
//         printf("5. Exit.\n");
//         printf("==> ");
//         scanf("%d", &n);
//         switch (n)
//         {
//         case 1:
//             input_students(students, MAX);
//             break;
//         case 2:
//             print_students(students, MAX);
//             break;
//         case 3:
//             print_students_by_year(students, MAX);
//             break;
//             case 4:
//             print_students_by_roll(students, MAX);
//             break;
//         case 5:
//         exit(1);
//         }
//     }

//     free(students);
//     return 0;
// }

// void input_students(struct student *s, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter details for student %d:\n", i + 1);
//         printf("Enter the roll no. : ");
//         scanf("%d", &(s + i)->roll);
//         getchar();
//         printf("Enter the name : ");
//         fgets((s + i)->name, sizeof((s + i)->name), stdin);
//         // gets((s+i)->name);
//         printf("Enter the Department : ");
//         fgets((s + i)->department, sizeof((s + i)->department), stdin);
//         printf("Enter the course : ");
//         fgets((s + i)->course, sizeof((s + i)->course), stdin);
//         printf("Enter the year of joining : ");
//         scanf("%d",&(s+i)->year);
//     }
// }

// void print_students(struct student *s, int n)
// {
//     printf("Details of all students:\n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("Student %d:\n", i + 1);
//         printf("Roll No: %d\n", (s + i)->roll);
//         printf("Name: %s\n", (s + i)->name);
//         printf("Department: %s\n", (s + i)->department);
//         printf("Course: %s\n", (s + i)->course);
//         printf("Year of Joining: %d\n", (s + i)->year);
//         printf("\n");
//     }
// }
// void print_students_by_year(struct student *s, int n)
// {
//     int year;
//     printf("Enter the year : ");
//     scanf("%d", &year);
//     printf("Details of %d year joined students:\n", year);
//     for (int i = 0; i < n; i++)
//     {
//         if ((s + i)->year == year)
//         {
//             printf("Student %d:\n", i + 1);
//             printf("Roll No: %d\n", (s + i)->roll);
//             printf("Name: %s", (s + i)->name);
//             printf("Department: %s", (s + i)->department);
//             printf("Course: %s", (s + i)->course);
//             printf("Year of Joining: %d\n", (s + i)->year);
//             printf("\n");
//         }
//     }
// }
// void print_students_by_roll(struct student *s, int n)
// {

//     int roll;
//     printf("Enter the roll no. : ");
//     scanf("%d", &roll);
//     printf("Details of %d roll no. student :\n", roll);
//     for (int i = 0; i < n; i++)
//     {
//         if ((s + i)->roll == roll)
//         {
//             printf("Student %d:\n", i + 1);
//             printf("Roll No: %d\n", (s + i)->roll);
//             printf("Name: %s", (s + i)->name);
//             printf("Department: %s", (s + i)->department);
//             printf("Course: %s", (s + i)->course);
//             printf("Year of Joining: %d\n", (s + i)->year);
//             printf("\n");
//         }
//     }
// }

//(3) ---------------------------------------
#include <stdio.h>
#include <stdlib.h>
#define MAX 3
struct student
{
    int roll;
    char name[30];
    char department[30];
    char course[10];
    int year_of_joining;
};
void input(struct student *c, int n);
void printing(struct student *c, int n);
void printing_with_year(struct student *c, int n);
void printing_with_roll(struct student *c, int n);
int main()
{
    int n;
    struct student *s;
    s = (struct student *)malloc(MAX * sizeof(struct student));
    while (1)
    {
        printf("Select any option:\n");
        printf("1. Enter Student data.\n");
        printf("2. Print all student data.\n");
        printf("3. print data according year of join.\n");
        printf("4. print data according roll no.\n");
        printf("5. Exit.\n");
        printf("==> ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            input(s, MAX);
            break;
        case 2:
            printing(s, MAX);
            break;
        case 3:
            printing_with_year(s, MAX);
            break;
        case 4:
            printing_with_roll(s, MAX);
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
void input(struct student *c, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("-------------------------------------------------\n");
        printf("Enter the record of Student no. %d \n", i + 1);
        printf("Enter the roll no. : ");
        scanf("%d", &(c + i)->roll);
        getchar();
        printf("Enter the name : ");
        gets((c + i)->name);
        printf("Enter the department : ");
        gets((c + i)->department);
        printf("Enter the Course : ");
        gets((c + i)->course);
        printf("Enter the Yera of joining : ");
        scanf("%d", &(c + i)->year_of_joining);
    }
}
void printing(struct student *c, int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("------------------------------------------\n");
        printf("Roll no.    :%d\n", (c + i)->roll);
        printf("name        :%s\n", (c + i)->name);
        printf("Department  :%s\n", (c + i)->department);
        printf("Course      :%s\n", (c + i)->course);
        printf("Year of join:%d\n", (c + i)->year_of_joining);
    }
}
void printing_with_year(struct student *c, int n)
{
    int year;
    printf("Enter the year : ");
    scanf("%d", &year);
    for (int i = 0; i < n; i++)
    {
        if (year == (c + i )->year_of_joining)
        {
            printf("------------------------------------------\n");
            printf("Roll no.    :%d\n", (c + i)->roll);
            printf("name        :%s\n", (c + i)->name);
            printf("Department  :%s\n", (c + i)->department);
            printf("Course      :%s\n", (c + i)->course);
            printf("Year of join:%d\n", (c + i)->year_of_joining);
        }
    }
}
void printing_with_roll(struct student *c, int n)
{
    int roll;
    printf("Enter the Roll no. : ");
    scanf("%d", &roll);
    for (int i = 0; i < n; i++)
    {
        if (roll == (c + i )->roll)
        {
            printf("------------------------------------------\n");
            printf("Roll no.    :%d\n", (c + i)->roll);
            printf("name        :%s\n", (c + i)->name);
            printf("Department  :%s\n", (c + i)->department);
            printf("Course      :%s\n", (c + i)->course);
            printf("Year of join:%d\n", (c + i)->year_of_joining);
        }
    }
}