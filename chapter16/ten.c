/*write a program that will read a line and delete from it all occurrence of the word 'the'.*/
#include <stdio.h>

void remove_the(char *line) {
    int i, j;
    char word[] = "the";
    int len = strlen(word);
    int line_len = strlen(line);

    for (i = 0; i <= line_len - len; i++) {
        int match = 1;
        for (j = 0; j < len; j++) {
            if (line[i + j] != word[j]) {
                match = 0;
                break;
            }
        }
        if (match) {
            for (j = i; j < line_len - len; j++) {
                line[j] = line[j + len];
            }
            line[line_len - len] = '\0';
            line_len = strlen(line);
            i--; // Stay at the same position after removal
        }
    }
}

int main() {
    char line[1000];
    printf("Enter a line of text: ");
    scanf("%[^\n]", line);
    getchar(); // Clear the newline character left in the buffer

    remove_the(line);

    printf("Line after removing 'the': %s\n", line);
    return 0;
}
