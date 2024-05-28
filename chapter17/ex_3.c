// /*An automobile company has serial number for  engine parts starting from AA0 to FF9. The charcteristics of
//  parts are year of manufacturing, material and quantity manufacactured.
//  (1) Create a structure to store information corresponding to a part.
//  (2) Write a program to retrieve information on parts with serial numbers between BB1 and CC6.*/
// #include <stdio.h>
// #include <stdlib.h>
// #define MAX 4
// struct company
// {
//     char serial_no[4];
//     int year[10];
//     int quantity[30];
//     int matrial[40];
// };
// void input(struct company *s, int n);
// void printing(struct company *s, int n);
// void printing_with_matrial(struct company *s, int n);


// int main()
// {
//     int n;
//     struct company *s;
//     s = (struct company *)malloc(MAX * sizeof(struct company));
//     input(s, MAX);
//     while (1)
//     {
//         printf("Select any option:\n");
//         printf("1. Enter company data.\n");
//         printf("2. Print all company data.\n");
//         printf("3. print data according to matrial .\n");
//         //printf("4. print data according roll no.\n");
//         printf("4. Exit.\n");
//         printf("==> ");
//         scanf("%d", &n);
    
//         switch (n)
//         {
//         case 1:
//             input(s, MAX);
//             break;
//         case 2:
//              printing(s, MAX);
//             break;
//         case 3:
//              printing_with_matrial(s, MAX);
//              break;
//         case 4:
//             exit(1);
//             break;
//         default:
//             printf("Please choose correct option.\n");
//             break;
//         }
//     }

//     free(s);
//     return 0;
// }
// void input(struct company *s, int n)
// {
//     printf("Enter the Details------------------------- \n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter the record of company matrial no. %d \n", i + 1);
//         printf("Enter the serial number :");
//         gets((s+i)->serial_no);
//         printf("Enter the manufacturing year : ");
//         gets((s+i)->year);
//         printf("Enter the matrial : ");
//         gets((s+i)->matrial);
//         printf("Enter the quantity : ");
//         gets((s+i)->quantity);
//     }
// }
// void printing(struct company *s, int n)
// {
//     for(int i=0;i<n;i++)
//     {
     
//         printf("------------------------------------------\n");
//         printf("serial no.    :%d\n", (s + i)->serial_no);
//         printf("year          :%s\n", (s + i)->year);
//         printf("matrial      :%s\n", (s+ i)->matrial);
//         printf("quantity      :%s\n", (s + i)->quantity);
//     }
// }
// void printing_with_matrial(struct company *s, int n)
// {
//     char matrial;
//     printf("Enter the Matrial : ");
//     scanf("%c", &matrial);
//     for (int i = 0; i < n; i++)
//     {
//         if (matrial == (s + i )->matrial)
//         {
//             printf("------------------------------------------\n");
//             printf("serial no.    :%d\n", (s + i)->serial_no);
//             printf("year          :%s\n", (s + i)->year);
//             printf("matrial      :%s\n", (s+ i)->matrial);
//             printf("quantity      :%s\n", (s + i)->quantity);
//         }
//     }
// }





#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 8

struct company {
    char serial_no[4];
    int year;
    char material[40];
    int quantity;
};

void input(struct company *s, int n);
void print_all(struct company *s, int n);
void print_parts_in_range(struct company *s, int n, const char* start, const char* end);
int main() {
    struct company *s;
    s = (struct company *)malloc(MAX * sizeof(struct company));
    if (s == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    
    int option;
    while (1) {
        printf("\nSelect any option:\n");
        printf("1. Enter company data.\n");
        printf("2. Print all company data.\n");
        printf("3. Print data of parts with serial numbers between BB1 and CC6.\n");
        printf("4. Exit.\n");
        printf("==> ");
        scanf("%d", &option);
        getchar();  // To consume the newline character left by scanf

        switch (option) {
            case 1:
                input(s, MAX);
                break;
            case 2:
                print_all(s, MAX);
                break;
            case 3:
                print_parts_in_range(s, MAX, "BB1", "CC6");
                break;
            case 4:
                free(s);
                exit(0);
                break;
            default:
                printf("Please choose a correct option.\n");
                break;
        }
    }

    free(s);
    return 0;
}

void input(struct company *s, int n) {
    printf("Enter the Details------------------------- \n");
    for (int i = 0; i < n; i++) {
        printf("Enter the record of company material no. %d\n", i + 1);
        printf("Enter the serial number: ");
        scanf("%s", (s + i)->serial_no);
        printf("Enter the manufacturing year: ");
        scanf("%d", &(s + i)->year);
        getchar();
        printf("Enter the material: ");
        fgets((s + i)->material, sizeof((s + i)->material), stdin);
        (s + i)->material[strcspn((s + i)->material, "\n")] = 0; // remove the newline character
        printf("Enter the quantity: ");
        scanf("%d", &(s + i)->quantity);
        getchar(); // to consume the newline character left by scanf
    }
}

void print_all(struct company *s, int n) {
    for (int i = 0; i < n; i++) {
        printf("------------------------------------------\n");
        printf("Serial number: %s\n", (s + i)->serial_no);
        printf("Year: %d\n", (s + i)->year);
        printf("Material: %s\n", (s + i)->material);
        printf("Quantity: %d\n", (s + i)->quantity);
    }
}

void print_parts_in_range(struct company *s, int n, const char* start, const char* end) {
    printf("Parts with serial numbers between %s and %s:\n", start, end);
    for (int i = 0; i < n; i++) {
        if (strcmp((s + i)->serial_no, start) >= 0 && strcmp((s + i)->serial_no, end) <= 0) {
            printf("------------------------------------------\n");
            printf("Serial number: %s\n", (s + i)->serial_no);
            printf("Year: %d\n", (s + i)->year);
            printf("Material: %s\n", (s + i)->material);
            printf("Quantity: %d\n", (s + i)->quantity);
        }
    }
}
