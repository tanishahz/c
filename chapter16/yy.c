/*Wite a program to count the number of occurrences of any two vowels in succession in a line of text. for
 example ,in the following sentence 
 "Please read this application and give me gratuity"
  such occurence are ea,ea,ui.*/
  #include <stdio.h>
#include <string.h>
#include <ctype.h>

int count_successive_vowels(const char *line) {
    int count = 0;
    int length = strlen(line);

    for (int i = 0; i < length - 1; i++) {
        if (isalpha(line[i]) && isalpha(line[i+1])) {
            char c1 = tolower(line[i]);
            char c2 = tolower(line[i+1]);
            if ((c1 == 'a' || c1 == 'e' || c1 == 'i' || c1 == 'o' || c1 == 'u') &&
                (c2 == 'a' || c2 == 'e' || c2 == 'i' || c2 == 'o' || c2 == 'u')) {
                printf("%c%c\n", c1, c2);
                count++;
            }
        }
    }

    return count;
}

int main() {
    char line[1000];
    printf("Enter a line of text: ");
    fgets(line, sizeof(line), stdin);

    int count = count_successive_vowels(line);
    printf("Number of occurrences of any two vowels in succession: %d\n", count);

    return 0;
}
