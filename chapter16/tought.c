/*Wite a program that takes a set of names of individuals and abbreviates the first and middle name to thir first letter.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void abbreviate_names(char names[][100], int num_names) {
    for (int i = 0; i < num_names; i++) {
        char *token;
        char abbrev_name[100] = "";
        token = strtok(names[i], " ");
        
        while (token != NULL) {
            if (isalpha(token[0])) { // Check if the token is alphabetic
                strncat(abbrev_name, &token[0], 1); // Add the first character
                strncat(abbrev_name, ".", 1); // Add a dot after the first character
            }
            token = strtok(NULL, " "); // Move to the next token
        }

        printf("%s\n", abbrev_name);
    }
}

int main() {
    char names[5][100]; // Assuming a maximum of 5 names, each of max length 100
    int num_names;

    printf("Enter the number of names: ");
    scanf("%d", &num_names);
    getchar(); // Clear the newline character left in the buffer

    printf("Enter the names (one per line):\n");
    for (int i = 0; i < num_names; i++) {
        fgets(names[i], sizeof(names[i]), stdin);
        strtok(names[i], "\n"); // Remove the newline character if present
    }

    printf("Abbreviated names:\n");
    abbreviate_names(names, num_names);

    return 0;
}
