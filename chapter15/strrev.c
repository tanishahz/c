#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    int length = strlen(str);
    int i, j;
    char temp;
    
    // Swap characters from beginning and end of string
    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[50]; // Assume the maximum length of the string is 50
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read string from user
    
    // Remove newline character if present
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }
    
    // Reverse the string
    reverseString(str);
    
    // Print the reversed string
    printf("Reversed string: %s\n", str);
    
    return 0;
}
