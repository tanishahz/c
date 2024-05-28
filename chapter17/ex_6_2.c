#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_BOOKS 100
struct library {
    int accession_number;
    char title[100];
    char author[100];
    float price;
    int is_issued;
};
void add_book(struct library books[], int *num_books);
void display_books(struct library books[], int num_books);
void list_books_by_author(struct library books[], int num_books, const char *author);
void list_title_of_book(struct library books[], int num_books, int accession_number);
int count_books(struct library books[], int num_books);
void list_books_by_accession_number(struct library books[], int num_books);
int compare_accession_number(const void *a, const void *b);

int main() {
    struct library books[MAX_BOOKS];
    int num_books = 0;
    int choice;
    char author[100];
    int accession_number;

    while (1) {
        printf("\nLibrary Menu:\n");
        printf("1. Add book information\n");
        printf("2. Display book information\n");
        printf("3. List all books of given author\n");
        printf("4. List the title of specified book\n");
        printf("5. List the count of books in the library\n");
        printf("6. List the books in the order of accession number\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // consume newline character left by scanf

        switch (choice) {
            case 1:
                add_book(books, &num_books);
                break;
            case 2:
                display_books(books, num_books);
                break;
            case 3:
                printf("Enter author name: ");
                fgets(author, sizeof(author), stdin);
                author[strcspn(author, "\n")] = '\0'; // remove newline character
                list_books_by_author(books, num_books, author);
                break;
            case 4:
                printf("Enter accession number: ");
                scanf("%d", &accession_number);
                list_title_of_book(books, num_books, accession_number);
                break;
            case 5:
                printf("Total number of books: %d\n", count_books(books, num_books));
                break;
            case 6:
                list_books_by_accession_number(books, num_books);
                break;
            case 7:
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

void add_book(struct library books[], int *num_books) {
    if (*num_books >= MAX_BOOKS) {
        printf("Library is full! Cannot add more books.\n");
        return;
    }
    struct library *book = &books[*num_books];
    printf("Enter accession number: ");
    scanf("%d", &book->accession_number);
    getchar(); // consume newline character left by scanf

    printf("Enter title: ");
    fgets(book->title, sizeof(book->title), stdin);
    book->title[strcspn(book->title, "\n")] = '\0'; // remove newline character

    printf("Enter author: ");
    fgets(book->author, sizeof(book->author), stdin);
    book->author[strcspn(book->author, "\n")] = '\0'; // remove newline character

    printf("Enter price: ");
    scanf("%f", &book->price);

    printf("Is the book issued (1 for yes, 0 for no): ");
    scanf("%d", &book->is_issued);

    (*num_books)++;
}

void display_books(struct library books[], int num_books) {
    for (int i = 0; i < num_books; i++) {
        printf("\nBook %d:\n", i + 1);
        printf("Accession number: %d\n", books[i].accession_number);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Price: %.2f\n", books[i].price);
        printf("Issued: %s\n", books[i].is_issued ? "Yes" : "No");
    }
}

void list_books_by_author(struct library books[], int num_books, const char *author) {
    int found = 0;
    for (int i = 0; i < num_books; i++) {
        if (strcmp(books[i].author, author) == 0) {
            printf("Accession number: %d\n", books[i].accession_number);
            printf("Title: %s\n", books[i].title);
            printf("Price: %.2f\n", books[i].price);
            printf("Issued: %s\n\n", books[i].is_issued ? "Yes" : "No");
            found = 1;
        }
    }
    if (!found) {
        printf("No books found by author %s\n", author);
    }
}

void list_title_of_book(struct library books[], int num_books, int accession_number) {
    for (int i = 0; i < num_books; i++) {
        if (books[i].accession_number == accession_number) {
            printf("Title: %s\n", books[i].title);
            return;
        }
    }
    printf("No book found with accession number %d\n", accession_number);
}

int count_books(struct library books[], int num_books) {
    return num_books;
}

void list_books_by_accession_number(struct library books[], int num_books) {
    qsort(books, num_books, sizeof(struct library), compare_accession_number);
    display_books(books, num_books);
}

int compare_accession_number(const void *a, const void *b) {
    return ((struct library *)a)->accession_number - ((struct library *)b)->accession_number;
}
