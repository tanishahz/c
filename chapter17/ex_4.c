// /*A record contains name of cricketer, his age, number of test matches that he has played and the average
//  runs that has scored in each test match. Create an array of structures to hold records of 20 such cricketers and
//  write a program to read these records and arrange them in ascending order by average runs. Use the qsort()
//  standard library function. */
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// #define MAX_CRICKETERS 20

// // Define the structure
// struct cricketer {
//     char name[50];
//     int age;
//     int test_matches;
//     float average_runs;
// };

// // Function to compare two cricketers based on their average runs
// int compare_by_average_runs(const void *a, const void *b) {
//     float avg_a = ((struct cricketer *)a)->average_runs;
//     float avg_b = ((struct cricketer *)b)->average_runs;

//     if (avg_a < avg_b) return -1;
//     if (avg_a > avg_b) return 1;
//     return 0;
// }

// // Function to input cricketer data
// void input_cricketers(struct cricketer cricketers[], int n) {
//     for (int i = 0; i < n; i++) {
//         printf("Enter details for cricketer %d:\n", i + 1);
//         printf("Name: ");
//         fgets(cricketers[i].name, sizeof(cricketers[i].name), stdin);
//         cricketers[i].name[strcspn(cricketers[i].name, "\n")] = '\0'; // Remove newline character

//         printf("Age: ");
//         scanf("%d", &cricketers[i].age);

//         printf("Number of test matches: ");
//         scanf("%d", &cricketers[i].test_matches);

//         printf("Average runs: ");
//         scanf("%f", &cricketers[i].average_runs);

//         getchar(); // Consume newline character left by scanf
//     }
// }

// // Function to print cricketer data
// void print_cricketers(struct cricketer cricketers[], int n) {
//     for (int i = 0; i < n; i++) {
//         printf("Cricketer %d:\n", i + 1);
//         printf("Name: %s\n", cricketers[i].name);
//         printf("Age: %d\n", cricketers[i].age);
//         printf("Number of test matches: %d\n", cricketers[i].test_matches);
//         printf("Average runs: %.2f\n\n", cricketers[i].average_runs);
//     }
// }

// int main() {
//     struct cricketer cricketers[MAX_CRICKETERS];

//     printf("Enter details for %d cricketers:\n", MAX_CRICKETERS);
//     input_cricketers(cricketers, MAX_CRICKETERS);

//     // Sort the cricketers by average runs using qsort
//     qsort(cricketers, MAX_CRICKETERS, sizeof(struct cricketer), compare_by_average_runs);

//     printf("\nCricketers sorted by average runs in ascending order:\n");
//     print_cricketers(cricketers, MAX_CRICKETERS);

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 5
typedef struct
{
    char name[50];
    int age;
    int matches;
    int score;
} cricketer;
void input(cricketer *s, int n);
void printing(cricketer *s, int n);
int compare_ints(const void *a, const void *b)
{
    cricketer *cricketerA = (cricketer *)a;
    cricketer *cricketerB = (cricketer *)b;
    if (cricketerA->score < cricketerB->score)
        return -1;
    if (cricketerA->score > cricketerB->score)
        return 1;
    return 0;
}
int compare_name(const void *a, const void *b)
{
    cricketer *cricketerA = (cricketer *)a;
    cricketer *cricketerB = (cricketer *)b;
    return strcmp(cricketerA->name,cricketerB->name);
}
int main()
{
    cricketer *cri;
    cri = (cricketer *)malloc(MAX * sizeof(cricketer));
    int no;
    while (1)
    {
        printf("1. Enter the data. :\n");
        printf("2. Print the data. :\n");
        printf("3. Sort data by name. :\n");
        printf("4. sort data by average runs. :\n");
        printf("5.Exit :\n");
        printf("==> ");
        scanf("%d", &no);
        switch (no)
        {
        case 1:
            input(cri, MAX);
            break;
        case 2:
            printing(cri, MAX);
            break;
        case 3:
            qsort(cri, MAX, sizeof(cricketer), compare_name);
            break;
        case 4:
            qsort(cri, MAX, sizeof(cricketer), compare_ints);
            break;
    
        case 5:
        exit(1);
            break;
        default:
            printf("Please choose correct option.\n");
            break;
        }
    }
    free(cri);
    return 0;
}
void input(cricketer *s, int n)
{
    for (int i = 0; i < n; i++)
    {
        getchar();
        printf("Enter the data of crickter no. %d\n", i + 1);
        printf("Enter the Name : ");
        gets((s + i)->name);
        printf("Enter the age : ");
        scanf("%d", &(s + i)->age);
        printf("Enter the matches Played : ");
        scanf("%d", &(s + i)->matches);
        printf("Enter the Average runs : ");
        scanf("%d", &(s + i)->score);
        printf("\n");
    }
}
void printing(cricketer *s, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("---------------------------------\n");
        printf("Name            = %s\n", (s + i)->name);
        printf("Age             = %d\n", (s + i)->age);
        printf("Matches palyed  = %d\n", (s + i)->matches);
        printf("Average Runs    = %d\n\n", (s + i)->score);
    }
}